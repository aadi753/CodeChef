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
		long n, x;
		cin >> n >> x;

		long num = x - 1;

		long ans = (2 * n) - num;

		cout << ans << endl;
	}
	return 0;
}