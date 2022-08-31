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

		long x;
		cin >> x;

		long num;
		long long ans = n;
		long long curr;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num < x){
				curr = ceil(x / (float) num);
				if(curr > ans){
					ans = curr;
				}
			}
		}

		cout << ans << "\n";
	}
	return 0;
}

/*

find the times taken by shops and select the max of them 

if(any shop takes more time than n then ans = max_time)

*/