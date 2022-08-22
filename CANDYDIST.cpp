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

		int m;
		cin >> m;

		string ans = "No";

		if(n % m == 0 && (n / m) % 2 == 0){
			ans = "Yes";
		}

		cout << ans << "\n";
	}
	return 0;
}