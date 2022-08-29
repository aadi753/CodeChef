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
		
		long long mod = 10000009;
		long long ans = 1;
		// char ch, cha; 
        int n = s.size();
        
		for(int i = 0; i < (n / 2); i++){
			//if both of them are ? ? 
			//ans *= 26
			//if one of them is ?
			//ans is same 
			//if none of them are ?? and both are not same 
			//ans = 0
			//break;

			// ch = s[i];
			// cha = s[n - i - 1];

			if(s[i] == '?' && s[n - i - 1] == '?'){
				ans = (ans * 26) % mod;
			}
			else if(s[i] == '?' || s[n - i - 1] == '?'){
				continue;
			}
			else if(s[i] == s[n - i - 1]){
				continue;
			}
			else{
				ans = 0;
				break;
			}



		}

		if(ans && (n % 2)){
			if(s[n / 2] == '?'){
				ans = (ans * 26) % mod;
			}
		}

		cout << ans % mod << "\n";

	}
	return 0;
}


/*
ab??
ans = 1;
*/