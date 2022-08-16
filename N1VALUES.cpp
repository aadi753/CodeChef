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

		cout << 1 << ' ';

		long long num = 1;
		for(int i = 0; i < n; i++){
			cout << num << ' ';
			num *= 2;
		}

		cout << '\n';

	}
	return 0;
}