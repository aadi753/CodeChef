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

		int m;
		cin >> m;

		long long ans = (n - 1) + (m - 1) + ((n - 1) * (m - 1) * 2);

		cout << ans << "\n";
	}
	return 0;
}

/*

0 1 1
1 2 2 
1 2 2 
2 + 5 + 5 => 12

max - points = 4

0 1 1
1 4 1
1 1 2 
2 + 6 + 4 => 12


0 1 1 1
1 2 2 2 
1 2 2 2
1 2 2 2

ans = (n - 1) + (m - 1) + ((n-1) * (m-1) * 2)
3 + 3 + 9 * 2
6 + 18
24

*/