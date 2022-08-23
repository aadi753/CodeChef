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

		int k;
		cin >> k;

		std::map<long, int> mp;
		long num;

		for(int i = 0; i < n; i++){
			cin >> num;
			mp[num]++;
		}

		long long sum = 0;
		int flag = 1;

		for(auto itr = mp.begin(); itr != mp.end(); itr++){
			if(itr->second == k){
				flag = 0;
				sum += itr->first;
			}
		}

		if(flag){
			sum = -1;
		}

		cout << sum << '\n';

	}
	return 0;
}