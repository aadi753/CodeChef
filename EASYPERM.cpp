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

		// for(int i = 1; i <= n; i++){
		// 	if((i % 2 == 1) && i < n){
		// 		cout << i + 1 << ' ';
		// 	}
		// 	else if(i % 2 == 0){
		// 		cout << i - 1 << ' ';
		// 	}
		// 	else{
		// 		cout << i << ' ';
		// 	}
		// }

		
		//just print the series in reverse 

		for(int i = n; i > 0; i--){
			cout << i << ' ';
		}
		

		cout << '\n';
	}
	return 0;
}

/*
1
2 1
2 1 3
2 1 4 3
2 1 4 3 5
5 6 3 4 1 2
6 7 6 7 6 7
2 1 4 3 6 5
3 3 7 7 11 11 

7 6 5 4 3 2 1
8 8 8 8 8 8 8

9 10 7 8 5 6 3 4 1 2 
10 12 10 12 10 12 10 12 10 12

10 9 8 7 6 5 4 3 2 1
11 11 11 11 11 11
2 1 4 3 6 5 8 7 10 9
3 3 7 7 11 11 15 15 19 19 

3 2 1
4 4 4
2 1 3
3 3 6
*/