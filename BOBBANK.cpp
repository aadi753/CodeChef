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
		int w;
		cin >> w;

		int x;
		cin >> x;

		int y;
		cin >> y;

		int z;
		cin >> z;

		long ans = w + z * (x - y);

		cout << ans << "\n";

	}
	return 0;
}