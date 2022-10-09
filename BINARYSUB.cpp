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
	long mod = 998244353;

	while(t--){
		string s;
		cin >> s;

		//1 - all chars are taken as individual
		//count the number of ab's
		//count the number of ba's

		//count the number of ab's and ba's
		int x = 0, y = 0;
		for(int i = 1; i < s.size(); i++){
			if(s[i] == 'a' && s[i - 1] == 'b') x++;
			if(s[i] == 'b' && s[i - 1] == 'a') y++;
		}

		long ans1 = 1, ans2 = 1;

		for(int i = 0; i < x; i++){
			ans1 = (ans1 * 2) % mod;
		}

		for(int i = 0; i < y; i++){
			ans2 = (ans2 * 2) % mod;
		}
		
		long ans = 0;
		
		if(ans1 > 1) ans = ans1;
		
		if(ans2 > 1) ans = (ans + ans2) % mod;
		
		if(ans == 0) ans = 1;

		cout << ans % mod << '\n';
	}
	return 0;
}

/*
abba
a b b a - as ind

ab b a - ab tog

a b ba - ba tog

ab ba - ab and ba tog

ababab
a b a b a b
a ba b a b *
ab a b a b
ab a ba b *
a b ab a b
ab ab a b
a b a b ab
a ba b ab *
ab a b ab
a b ab ab
ab ab ab
a ba ba b *
*/