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
		//input
		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		//sort(arr, arr + n);

		//process
		// long curr;

		// for(int i = 0; i < n - 1; i++){
		// 	curr = arr[i];
		// 	for(int j = i + 1; j < n; j++){
		// 		if(gcd(arr[j], curr) < arr[j]){
		// 			arr[j] = gcd(arr[j], curr);
		// 		}
		// 	}
		// }

		//take gcd of all nums and mul by n
		long gcd1 = arr[0];

		for(int i = 1; i < n; i++){
			//take gcd 
			gcd1 = gcd(gcd1, arr[i]);
		}

		//calc sum
		long long sum = gcd1 * n;

		cout << sum << "\n";
	}
	return 0;
}