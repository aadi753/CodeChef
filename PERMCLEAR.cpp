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

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int k;
		cin >> k;

		unordered_set<int> st;
        int num;
		for(int i = 0; i < k; i++){
			cin >> num;
			st.insert(num);
		}

		for(int i = 0; i < n; i++){
			auto itr = st.find(arr[i]);
			if(itr==st.end()){
				cout << arr[i] << ' ';
			}
		}

		cout << '\n';

	}
	return 0;
}