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
		int n;
		cin >> n;

		//x * y > x + y
		//inequality will not hold when either no. is 0 or 1 
		//OR both are 2

		long num;
		long long total = n;
		long long twos = 0;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num == 1 || num == 0){
				total--;
			}
			else if(num == 2){
				twos++;
			}
		}
		
		long long ans = 0;

		if(total > 1){
			ans += ((total - 1) * total) / 2;
		}

		if(twos > 1){
			ans -= ((twos - 1) * twos) / 2;
		}

		// if(ones > 1){
		// 	ans -= ((ones - 1) * ones) / 2;
		// }

		cout << ans << "\n";
	}
	return 0;
}