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

		//put all even numbers first and then all odd numbers 
		//diff btw all even and all odd are even 
		//diff btw even and odd is odd
		//even + odd = odd
		//if even or odd == 0 => ans = -1

		vector<int> even;
		vector<int> odd;
        int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num % 2){
				//odd
				odd.push_back(num);
			}
			else{
				even.push_back(num);
			}
		}

		int N = even.size(), M = odd.size();

		if(N == 0 || M == 0){
			cout << -1;
		}
		else{
			for(int i = 0; i < N; i++){
				cout << even[i] << ' ';
			}

			for(int i = 0; i < M; i++){
				cout << odd[i] << ' ';
			}
		}

		cout << '\n';
	}
	return 0;
}