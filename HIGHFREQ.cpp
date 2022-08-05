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

		int arr[n] = {};

		int num;

		for(int i = 0; i < n; i++){
			cin >> num;

			arr[num - 1]++;
		}

		sort(arr, arr + n);

		int max = arr[n - 1];
		int max2 = arr[n - 2];

		int diff = max - (max / 2);

		if(diff >= max2){
			cout << diff << "\n";
		}
		else{
			cout << max2 << "\n";
		}

	}
	return 0;
}