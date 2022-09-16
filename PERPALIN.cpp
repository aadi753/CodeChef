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

		int p;
		cin >> p;

		string ans = "impossible";

		if(p > 2){
			ans = "";
			string temp = "";

			//generate temp;
			for(int i = 0; i < p; i++){
				temp += 'a';
			}

			temp[p / 2] = 'b';


			if(p % 2 == 0){
				temp[(p / 2) - 1] = 'b';	
			}

			for(int i = 0; i < (n / p); i++){
				ans += temp;
			}
		}
		
		cout << ans << '\n';

	}
	return 0;
}

/*

Total length = (n):
1 1
2 2
3 3
4 4
5 5
6 3 6
7 7 
8 4 8
9 3 9
10 5 10
11 11
12 3 4 6 12
13 13
14 7 14
15 3 5 15

aba abba aabaa aabbaa aaabaaa
when p is odd => p / 2 a's and then one b and then p / 2 a's
when p is even then (p - 1) / 2 a's then 2 b's and then (p - 1) / 2 a's

if n is a multiple of p and p > 2 then ans exists 


*/