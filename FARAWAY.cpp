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

		long m;
		cin >> m;

		long num;
		long long ans = 0;
		
		for(int i = 0; i < n; i++){
			//check if x - 1 , m - x
			cin >> num;
			ans += max(num - 1, m - num) ;
		}

		cout << ans << '\n';

	}
	return 0;
}