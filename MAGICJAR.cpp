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

		long num;
		long long total = 1;

		//worst case every one takes num - 1 jars
		//so no one can cook 
		//we will need atleast one more than that 

		for(int i = 0; i < n; i++){
			cin >> num;

			total += num - 1;
		}

		cout << total << "\n";
	}
	return 0;
}