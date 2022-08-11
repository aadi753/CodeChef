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
		int n;
		cin >> n;

		string ans = "YES";

        string s;

		for(int i = 0; i < n; i++){
			cin >> s;
			
			//check if each word contains only the letters from 
			//either 'a - m' or 'N - Z'
			//and each word is from same group as the first letter

			//decide the group
			if(s[0] >= 'a' && s[0] <= 'z'){
				//group 1
				//check if each letter in word is between 'a - m' or NOT

				for(int j = 0; j < s.size(); j++){
					if(s[j] < 'a' || s[j] > 'm'){
						ans = "NO";
						break;
					}
				}
			}
			else{
				//group 2
				//check if each letter in word is between 'N - Z' or NOT

				for(int j = 0; j < s.size(); j++){
					if(s[j] < 'N' || s[j] > 'Z'){
						ans = "NO";
						break;
					}
				}
			}
		}

		cout << ans << "\n";

	}
	return 0;
}