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
		long n;
		cin >> n;

		string s;
		cin >> s;

		char c;
		cin >> c;

		long prev = -1;
		long long ans = 0;
	
		for(int i = 0; i < n; i++){
			if(s[i] == c){
				//then calc
				ans += (n - i) * (i - prev);
				prev = i;
			}
		}

		cout << ans << "\n";
	}
	return 0;
}