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

		long res;
		cin >> res;

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		string ans = "YES";

		long max = LONG_MAX;
		long min = 0;

		long prev = arr[0];

		for(int i = 1; i < n; i++){
			long curr = arr[i];

			if(curr < min || curr > max){
				ans = "NO";
				break;
			}

			if(curr > prev){
				//okay 
				min = prev;
			}
			else if(curr < prev){
				//okay
				max = prev;
			}

			prev = curr;
		}

		cout << ans << '\n';
	}
	return 0;
}