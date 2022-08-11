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

		// if(n <= 2){
		// 	for(int i = 1; i <= n; i++){
		// 		cout << i << ' ';
		// 	}
		// }
		// else{
		// 	cout << 1 << ' ' << 2 << ' ';
			
		// 	long long num = 3;
		// 	long i = 0;

		// 	while(i < (n - 2)){
		// 		if(i % 2 == 0){
		// 			cout << num << ' ';
		// 		}
		// 		else{
		// 			cout << num * 2 << ' ';
		// 			num++;
		// 		}

		// 		i++;
		// 	}
		// }

		//start from n - ciel(n / 2) + 1 //so no.s don't repeat
		//because if we start from n / 2 then n will occur twice
		
		long i = 0;
		long long num = (n / 2) + 1;
		
		while(i < n){
			if(i % 2 == 0){
				cout << num << ' ';
			}
			else{
				cout << num * 2 << ' ';
				num++;
			}
			i++;
		}

		cout << "\n";
	}
	return 0;
}