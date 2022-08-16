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

		string s2;
		cin >> s2;

		long arr[n + 1];
		for(int i = 0; i <= n; i++){
			cin >> arr[i];
		}


		int pos = 0;

		for(int i = 0; i < n; i++){
			if(s[i] == s2[i]){
				pos++;
			}
		}

		long max = arr[0];

		if(pos == n){
			max = arr[n];
		}
		else{
			for(int i = 0; i <= pos; i++){
				if(arr[i] > max){
					max = arr[i];
				}
			}
		}
		

		cout << max << "\n";

	}
	return 0;
}