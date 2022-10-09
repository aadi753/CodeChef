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

		string s;
		cin >> s;

		//dist btw msb and first 0
		int ans = 1;

		for(int i = 1; i < s.size(); i++){
			if(s[i] == '1') break;

			ans++;
		}

		cout << ans << '\n';

	}
	return 0;
}