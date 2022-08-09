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

		long k;
		cin >> k;

        long arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int min = abs(arr[0] + arr[n - 1] - k);
		int ans = 0;

		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(abs(arr[i] + arr[j] - k) < min){
					min = abs(arr[i] + arr[j] - k);
				}
			}
		}

		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(min == abs(arr[i] + arr[j] - k)){
					ans++;
				}
			}
		}

		cout << min << ' ' << ans << "\n";

	}
	return 0;
}