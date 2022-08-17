#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long long arr[100000001];

int fill_powers(){
	arr[0] = 1;
	long long num = 2;
	long long mod = 1000000007;

	for(long i = 1; i < 100000001; i++){
		arr[i] = (arr[i - 1] + num) % mod;
		num = (num * 2) % mod;
	}

	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	fill_powers();

	while(t--){
		int n;
		cin >> n;

		long long ans = arr[n - 1];

		cout << ans << '\n';

	}
	return 0;
}