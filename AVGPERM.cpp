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

		//n, n - 2, n - 3, n - 1

		cout << n << ' ';

		int num = 2;

		if(n > 3){
			num = 3;
			cout << n - 2 << ' ';
		}

		for(int i = 1; i <= n - num; i++){
			cout << i << ' ';
		}

		cout << n - 1;

		cout << "\n";
	}
	return 0;
}