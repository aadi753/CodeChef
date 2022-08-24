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
		int w;
		cin >> w;

		int x, y, z;
		cin >> x >> y >> z;

		string ans = "NO";

		//if w = x
		//or w = y
		//or w = z
		//or combination of 2
		//or sum of all 
		//then true 

		string yes = "YES";

		if(w == x || w == y || w == z){
			ans = yes;
		}
		else if(w == x + y || w == x + z || w == y + z){
			ans = yes;
		}
		else if(w == x + y + z){
			ans = yes;
		}

		cout << ans << "\n";
	}
	return 0;
}