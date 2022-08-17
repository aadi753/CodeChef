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
		int a, b, c;
		cin >> a >> b >> c;

		//at least a
		//at most b;
		//at least c

		//min = max(a,c)
		//max = b

		int min = max(a, c);
		int max = b;


		string ans = "No";

		if(max >= min){
			ans = "Yes";
		}

		cout << ans << "\n";


	}
	return 0;
}