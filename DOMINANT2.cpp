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

		int arr[1001] = {};

		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			arr[num]++;
		}

		sort(arr, arr + 1001);

		string ans = "NO";

		if(arr[1000] > arr[999]){
			ans = "YES";
		}

		cout << ans << "\n";

	}
	return 0;
}