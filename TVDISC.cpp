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
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int f = a - c;
		int s = b - d;
        
        string ans = "Second";
        
		if(f == s){
			ans = "Any";
		}
		else if(f < s){
			ans = "First";
		}

		cout << ans << "\n";
	}
	return 0;
}