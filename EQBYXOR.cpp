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
		long long a, b;
		cin >> a >> b;

		long long n;
		cin >> n;
		
		n--;

		long long x = a ^ b;
		//cout << x << '\n';

		int ans = -1;

		if(x == 0){
			ans = 0;
		}
		else if(x <= n){
			ans = 1;
		}
		else{
			//check if the largest bit of x is == largest bit of n

			int x_bit = 0, n_bit = 0;
			
			while(x > 0){
				x_bit++;
				x /= 2;
			}

			while(n > 0){
				n_bit++;
				n /= 2;
			}

			if(n_bit == x_bit){
				ans = 2;
			}

            // if(n != 0 && (log2(x) == log2(n))){
            //     ans = 2;
            // }
		}

		cout << ans << "\n";

	}
	return 0;
}