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
		string s = "";
		while(s == ""){
		    getline(cin, s);
		}

		int alpha[26] = {};

		char c;
		int n = s.size();

		for(int i = 0; i < n; i++){
			c = s[i];
			if(c >= 'a' && c <= 'z'){
				alpha[c - 97] = 1;
			}
			else if(c >= 'A' && c <= 'Z'){
				alpha[c - 65] = 1;
			}
		}

		string ans = "";

		for(int i = 0; i < 26; i++){
			if(alpha[i] == 0){
				c = i + 65;
				ans += c;
			}
		}

		if(ans == ""){
			ans = "~";
		}

		cout << ans << "\n";
	}
	return 0;
}