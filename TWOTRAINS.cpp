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
		long n;
		cin >> n;

		int arr[n - 1];
		for(int i = 0; i < n - 1; i++){
			cin >> arr[i];
		}

		long long ans = 0;

		long long t1 = 0;

		//if t1 < t2
		//ans += arr[i]
		//else ans = (t1 - t2) + arr[i]
		
		for(int i = 0; i < n - 1; i++){
			t1 += arr[i];

			if(t1 < ans){
				ans += arr[i];
			}
			else{
				ans += (t1 - ans) + arr[i];
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}