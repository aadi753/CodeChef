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
		long n;
		cin >> n;

		long long num;
		long odd = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num & 1 == 1){ // or num % 2 == 1 
				odd++;
			}
		}

		long ans = odd / 2;
		
		cout << ans << "\n";
	}
	return 0;
}