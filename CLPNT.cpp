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

		std::vector<long> arr;
		long num;

		for(int i = 0; i < n; i++){
			cin >> num;
			arr.push_back(num);
		}
		
// 		for(int i = 0; i < n; i++){
// 		    cout << arr[i] << ' ';
// 		}
// 		cout << "\n";

		int q;
		cin >> q;
		
		long x, y;

		for(int i = 0; i < q; i++){
			cin >> x >> y;
			//if x + y is in arr then -1
			//else count how many numbers are there upto it use lower_bound maybe ??
			//greater than equal to
			//get lower bound if it exists in arr then -1 
			//else index - 1

			//get lower bound
			int index = lower_bound(arr.begin(), arr.end(), (x + y)) - arr.begin();
			
			//cout << index << ' ' << arr[index] << '\n';
			
			if(index == n){
			    cout << n;
			}
			else if(arr[index] == (x + y)) {
				cout << -1;
			}
			else{
				cout << index;
			}

			cout << '\n';
		}
	}
	return 0;
}