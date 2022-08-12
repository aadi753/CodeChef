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

		int disc = 0;

		if(n > 5000){
			disc = 500;
		}
		else if(n > 1000){
			disc = 100;
		}
		else if(n > 100){
			disc = 25;
		}

		cout << n - disc << "\n";

	}
	return 0;
}