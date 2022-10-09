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
		int a, b;
		cin >> a >> b;

		int x, y;
		cin >> x >> y;

		//time = dist / speed
		float t1 = (float)a / x;
		float t2 = (float)b / y;


		if(t1 == t2) cout << "Both" << '\n';
		else if(t1 < t2) cout << "Chef" << '\n';
		else cout << "Chefina" << '\n';
	}
	return 0;
}