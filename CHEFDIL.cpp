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

		long n = s.size();
		long zeros = 0, ones = 0;
		
		for(int i = 0; i < n; i++){
			if(s[i] == '0'){
				zeros++;
			}
			else{
				ones++;
			}
		}

		string ans = "WIN";

		if(ones % 2 == 0){
			ans = "LOSE";
		}

		cout << ans << "\n";

	}
	return 0;
}