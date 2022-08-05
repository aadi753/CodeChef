#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;

		//number of levels = n / 4 = l => l * (6 + 5)
		//number of dice at top most level = n % 4
		//if 1 => (6 + 5 + 3 + 2)
		//else 2 => (6 + 5 + 3) + (6 + 5 + 3)
		//else 3 => (6 + 5) + (6 + 5 + 3) + (6 + 5 + 3)
		//visible from top = 4 things => 4 * 4 = 16 (if n >= 4)
		//else 4 * n


		long long ans = 0;

		long long levels = n / 4;

		long at_top_level = n % 4;

		ans = levels * 44;

		if(n >= 4){
			ans += 16;
		}
		else{
			ans += 4 * n; 
		}

		//adding the open dices on top level
		if(n % 4 == 1){
			ans += (6 + 5 + 3 + 2);
		}
		else if(n % 4 == 2){
			ans += (6 + 5 + 3) + (6 + 5 + 3);
		}
		else if(n % 4 == 3){
			ans += (6 + 5) + (6 + 5 + 3) + (6 + 5 + 3);
		}

		cout << ans << "\n";

	}
	return 0;
}