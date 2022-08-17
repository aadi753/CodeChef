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

		long a[n];
		long b[n];

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			cin >> b[i];
		}

		map<pair<long, long>, long> count;

		long ans = 0;
		
		//traversing through the pairs and adding the count of similar pairs

		for(int i = 0; i < n; i++){
			pair<long, long> p = {a[i], b[i]};
			ans += count[p];
			p = {b[i], a[i]};
			count[p]++;
		}

		cout << ans << "\n";
	}
	return 0;
}