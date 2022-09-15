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

		string ans = "NO";

		int arr[n];
		int gc;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(i){
				gc = gcd(gc, arr[i]);
			}
			else{
				gc = arr[i];
			}
		}

		//we have the total gcd now we need k subarrays whose gcd sum to k * gc
		//

		long goal = k * gc;

		//find all the posible combinations of gcds 


	}
	return 0;
}