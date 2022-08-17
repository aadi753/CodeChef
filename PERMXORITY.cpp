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

		if(n == 2){
			//corner case when no posible solution
			cout << -1 << ' ';
		}
		else if(n % 2){
			//n is odd
			for(int i = 1; i <= n; i++){
				cout << i << ' ';
			}
		}
		else{
			cout << 2 << ' ' << 3 << ' ' << 1 << ' ' << 4 << ' ';

			for(int i = 5; i <= n; i++){
				cout << i << ' ';
			}
		}

		cout << "\n";
	}
	return 0;
}