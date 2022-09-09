#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	long n;

	cin >> t;

	while(t--){

		cin >> n;

		long long arr[n];

		long count = 0;
		long long ans = 0;

		for(long i = 0; i < n ;i++){
			cin >> arr[i];
		}
		
		sort(arr, arr + n);

		for(long i = 1; i < n; i++){
			if(arr[i] == arr[i - 1]){
				count++;
			}
			else if(count){
				ans += ((count + 1) * count) / 2;
				count = 0;
			}
		}

		if(count){
			ans += ((count + 1) * count) / 2;
		}

		cout << ans << '\n';
	}
	return 0;
}
