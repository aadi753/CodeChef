#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long long mod = 1000000007;

long long arr[1000002];

void fill_arr(){
	arr[0] = 1;
	arr[1] = 1;

	for(long i = 2; i < 1000002; i++){
		arr[i] = (arr[i - 1] * i) % mod;
	}
}

// long long fact(long num){
// 	long long res = 1;

// 	for(long i = 2; i <= n; i++){
// 		res = (res * i) % mod;
// 	}

// 	return res;
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	fill_arr();

	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		//ans = (n + 1)! - 1

		long long ans = arr[n + 1];
		ans--;

		cout << ans << '\n';

	}
	return 0;
}

/*
1
1

1 2
1 + 2 + 2
5

1 2 3 
5 3
5 + 3 + 15
23
1 + 3 + 3
7 2 
7 + 2 + 14
23


1 2 3 4
5 3 4
23 4
23 + 4 + 23 * 4
27 + 92 
119

119 6
119 + 6 + 119 * 6


*/

/*

1 5 23 119 839

(n + 1)! - 1

*/