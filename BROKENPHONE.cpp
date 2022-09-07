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
		int x;
		cin >> x;

		int y;
		cin >> y;

		string ans = "NEW PHONE";

		if(x == y){
			ans = "ANY";
		}
		else if(x < y){
			ans = "REPAIR";
		}

		cout << ans << '\n';

	}
	return 0;
}