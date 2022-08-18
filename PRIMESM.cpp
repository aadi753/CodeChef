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

		int ans = 0;

		if(a == 1 || b == 1){
			ans = -1;
		}
		else{
			if(gcd(a, b) > 1){
				ans = 0;
			}
			else{
				ans = 1;
			}
		}

;
		cout << ans << '\n';
	}
	return 0;
}