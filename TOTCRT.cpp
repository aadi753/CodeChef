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

		map<string, long> mp;

		string s;
		long num;

		for(int j = 0; j < 3; j++)
		for(int i = 0; i < n; i++){
			cin >> s;
			cin >> num;
			//if s exist in map then add num to it 
			//else add s to map with num

			auto itr = mp.find(s);
			if(itr != mp.end()){
				mp[s] += num;
			}
			else{
				mp[s] = num;
			}
		}


		//create a array with only the values
		// int size = mp.size();

		// long arr[size];
		// int i = 0;

		// for(auto itr = mp.begin(); itr != mp.end(); itr++){
		// 	arr[i] = itr->second;
		// 	i++;
		// }

		// sort(arr, arr + size);

		// for(int i = 0; i < size; i++){
		// 	cout << arr[i] << ' ';
		// }

		std::vector<long> v;
		for(auto itr = mp.begin(); itr != mp.end(); itr++){
			v.push_back(itr->second);
		}

		sort(v.begin(), v.end());

		for(int i = 0; i < v.size(); i++){
			cout << v[i] << ' ';
		}

		cout << "\n";

	}
	return 0;
}