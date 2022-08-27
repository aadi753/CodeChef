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
		long n, m, x, k;
		cin >> n >> m >> x >> k;

		string s;
		cin >> s;

		//total patents = n
		//total months we have = m
		//how many people can work on it at once => x
		//total people = k
		//how many people can work on it this month 

		long even = 0, odd = 0;
		for(long i = 0; i < k; i++){
			if(s[i] == 'O'){
				odd++;
			}
			else{
				even++;
			}
		}

		string ans = "yes";

		long avail = 0;
		for(long i = 1; i <= m; i++){
			//in this month how many people are available to work 
			//and how many can work
			if(i % 2){
				//avail = odd
				avail = odd;
				if(x < avail){
					avail = x;
				}

				odd -= avail;
			}
			else{
				//avail = even
				avail = even;
				if(x < avail){
					avail = x;
				} 

				even -= avail;
			}

			n -= avail;
		}

		if(n > 0){
			ans = "no";
		}

		cout << ans << '\n';
	}
	return 0;
}