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

		long long ans = ( 2*n*(n-1)*(n-1) ) + ( n*(n-1)*(n-2) ) + ( 2*n*(n-1)*(n-2)*(n-2) );
		
		if(n < 2){
			ans = 0;
		}

		cout << ans << '\n';
	}
	return 0;
}