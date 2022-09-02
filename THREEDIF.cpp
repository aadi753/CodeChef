#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long mod = 1000000007;
	
	int t;
	cin >> t;
	while(t--){
		long long arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr, arr + 3);

		//smallest * (2nd smallest - 1) * greatest 

		long long ans = ((((arr[0] % mod) * ((arr[1] - 1) % mod)) % mod) * ((arr[2] - 2) % mod)) % mod;

		cout << ans << "\n";

	}
	return 0;
}