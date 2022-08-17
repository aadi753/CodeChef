#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
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

		long arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}


		//find the pair that gives the least LCM 
		long ans = arr[0] * arr[1] / __gcd(arr[0], arr[1]);

		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				ans = min( ans, ( arr[i] * arr[j] / __gcd(arr[i], arr[j]) ) );
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}