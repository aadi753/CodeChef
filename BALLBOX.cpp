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

		long k;
		cin >> k;

		string ans = "YES";

		if((k * (k + 1) / 2) > n){
			ans = "NO";
		}

		cout << ans << "\n";
	}
	return 0;
}