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

		int n = s.size();

		int alpha[26] = {};

		for(int i = 0; i < n; i++){
			alpha[s[i] - 65]++;
		}

		string ans = "NO";

		// for(int i = 0; i < 26; i++){
		// 	cout << alpha[i] << ' ';
		// }
		// cout << "\n";
		
		//LTIME
		if(n >= 9){
			if(alpha['L' - 65] > 1 && alpha['T' - 65] > 1 && alpha['I' - 65] > 1 && alpha['M' - 65] > 1){
				
				if(n == 9 && alpha['E' - 65] > 0){
					ans = "YES";
				}
				else if(alpha['E' - 65] > 1){
					ans = "YES";
				}
			}
		}
		

		cout << ans << "\n";

	}
	return 0;
}