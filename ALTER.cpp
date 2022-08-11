#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;
	while(t--){
		long long a, b, p, q;
		cin >> a >> b >> p >> q;

		string ans = "NO";

		if(p % a == 0 && q % b == 0){
			long x = p / a;
			long y = q / b;

			if(abs(x - y) <= 1){
				ans = "YES";
			}
		}

		cout << ans << '\n';
	}
	return 0;
}