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

		string s;
		cin >> s;

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		string ans = "Dum";

		if(s == "Dee"){
			if(n == 1){
				if(arr[0] % 2 == 0){
					ans = "Dee";
				}
			}
		}

		cout << ans << "\n";
	}
	return 0;
}