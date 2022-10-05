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

		string ans = "Sad";
		int prev = 0, p = 0;

		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'){
				if(p){
					ans = "Happy";
					break;
				}

				if(prev){
					p = 1;
				}

				prev = 1;
			}
			else{
				p = 0;
				prev = 0;
			}
		}

		cout << ans << '\n';
	}
	return 0;
}