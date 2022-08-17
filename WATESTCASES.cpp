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

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		string s;
		cin >> s;

		int min = INT_MAX;

		for(int i = 0; i < n; i++){
			if(s[i] == '0'){
				if(min > arr[i]){
					min = arr[i];
				}
			}
		}

		cout << min << "\n";

	}
	return 0;
}