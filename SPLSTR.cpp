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

		long k;
		cin >> k;

		string s;
		cin >> s;

		int zeros = 0, ones = 0;

		for(int i = 0; i < n; i++){
			if(s[i] == '0'){
				zeros++;
			}
			else{
				ones++;
			}
		}

		// int ans = 0;

		// if(k >= n){
		// 	if(zeros == ones){
		// 		ans = 0;
		// 	}
		// 	else{
		// 		ans = 1;
		// 	}
		// }
		// else{
		// 	//k < n

		// }

		int diff = abs(zeros - ones);

		int ans = ceil((float)diff / k);

		cout << ans << '\n';

	}
	return 0;
}

/*
6 4 
101111

10 11 1 1
10 1 1 1 1
*/