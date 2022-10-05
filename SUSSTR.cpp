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

		int i = 0;
		int j = s.size() - 1;

		string ans = "";

		int alice = 1;
		
		while(i <= j){
			if(alice){
				//alice turn
				if(s[i] == '0'){
					//add it to front
					ans = '0' + ans;
				}
				else{
					//add it to the end
					ans += '1';
				}

				i++;
			}
			else{
				//bob turn
				if(s[j] == '1'){
					ans = '1' + ans;
				}
				else{
					ans += '0';
				}

				j--;
			}

			alice = 1 - alice;
		}

		cout << ans << '\n';
	}
	return 0;
}