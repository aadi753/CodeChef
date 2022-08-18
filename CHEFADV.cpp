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
		long n, m, x, y;
		cin >> n >> m >> x >> y;

		//is it possible to go from 1 to n 
		//and 1 to m

		string ans = "Pofik";
        
		if(((n == 1) || ((n - 1) % x == 0)) && ((m == 1) || ((m - 1) % y == 0))){
			ans = "Chefirnemo";
		}
		else{

			long n1 = n - 2;
			long m1 = m - 2;

			if(n1 >= 0 && m1 >= 0 && (n1 % x == 0) && (m1 % y == 0)){
				ans = "Chefirnemo";
			}

		} 

		//ALSO CORRECT
		//if both are already 1

		// if(n == 1 && m == 1){
		// 	ans = "Chefirnemo";
		// }
		// else{
		// 	//we need to get there

		// 	//if we can reach there by incrementing by x and y

		// 	if((n - 1) % x == 0 && (m - 1) % y == 0){
		// 		ans = "Chefirnemo";
		// 	}
		// 	else{
		// 		//we can not directly reach there
		// 		//but can we reach there using special op

		// 		//we can't use special op when n or m = 1

		// 		if(n != 1 && m != 1){
		// 			if((n - 2) % x == 0 && (m - 2) % y == 0){
		// 				ans = "Chefirnemo";
		// 			}
		// 		}
		// 	}
		// }

		cout << ans << "\n";
	}
	return 0;
}