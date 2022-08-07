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
		long l , r;
		cin >> l >> r;

		long long ans = (2 * r) - (2 * l) + 1;
		
		cout << ans << "\n";
	}
	return 0;
}