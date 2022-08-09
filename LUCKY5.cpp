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
		string s;
		cin >> s;

		int n = s.size();
		int ans = 0;

		for(int i = 0; i < n; i++){
			if(s[i] != '4' && s[i] != '7'){
				ans++;
			}
		}

		cout << ans << "\n";

	}
	return 0;
}