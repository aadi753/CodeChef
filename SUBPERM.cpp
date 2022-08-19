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

		if(n > 1 && k == 1){
			cout << -1;
		}
		else{
			//print k - 1 terms sequentially and then rest in reverse 
			//as 1 and n are always true 

			int i = 1;

			while(i < k){
				cout << i << ' ';
				i++;
			}

			int j = n;

			while(j >= k){
				cout << j << ' ';
				j--;
			}
		}

		cout << "\n";
	}
	return 0;
}