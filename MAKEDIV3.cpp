#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string ans = "3";
		for(int i = 1; i < n - 1; i++){
			ans += '0';
		}
		
		if(n > 1){
			ans += '3';
		}
		cout << ans << endl;
	}
	return 0;
}