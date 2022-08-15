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
		long n;
		cin >> n;

		//ans = number of factors of n - 1

        n--;
		long ans = 0;

		for(long i = 1; i * i <= n; i++){
			if(n % i == 0){
				ans++;

				if(i * i != n){
					ans++;
				}
			}
		}

		cout << ans << "\n";

	}
	return 0;
}