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
		int x, y, z;
		cin >> x >> y >> z;

		string ans = "Editorialist";
		if(x > y && x > z){
			ans = "Setter";
		} 
		else if(y > x && y > z){
			ans = "Tester";
		}

		cout << ans << "\n";

	}
	return 0;
}