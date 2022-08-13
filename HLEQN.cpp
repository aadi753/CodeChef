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

		string ans = "NO";

		for(int i = 1; i * i <= n; i++){
			if((n - (2 * i)) % (2 + i) == 0 && n != 2 * i){
				ans = "YES";
				break;
			}
		}
		

		// long long num;
		// if(n > 4){
		// 	if((n - 2) % 3 == 0){
		// 		ans = "YES";
		// 	}
		// 	else{
		// 		num = (n - 2) / 3;

		// 		//go from a = num to 2 and from b = 2 to num
		// 		//if res > n then a-- else b++

		// 		long long a = num;
		// 		long long b = 2;

		// 		long long res;

		// 		while(a > 1 && b <= num){
		// 			res = 2 * a + 2 * b + a * b;

		// 			if(res == n){
		// 				ans = "YES";
		// 				break;
		// 			}
		// 			else if(res > n){
		// 				a--;
		// 			}
		// 			else{
		// 				b++;
		// 			}

		// 		}

		// 	}
		// }
		

		cout << ans << "\n";
	}
	return 0;
}