#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	long arr[n];

	std::map<long, long> mp;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		mp[arr[i]] = 0;
	}

	//4 1 2 3 4
	//map the number of times each element occurs as minimum
	long min;
	for(int i = 0; i < n; i++){
		min = arr[i];
		for(int j = i; j < n; j++){
			
			if(arr[j] < min){
				min = arr[j];
			}

			mp[min]++;
		}

		//update the no. as it occured as min again
// 		mp[min]++;
	    // cout << min 
	    
	}

// 	for(auto itr = mp.begin(); itr != mp.end(); itr++){
// 		cout << itr->first << ' ' << itr->second << "\n";
// 	}

	//no. of queries
	int q;
	cin >> q;

	long k;
	for(int i = 0; i < q; i++){
		cin >> k;

		cout << mp[k] << "\n";
	}

	
	return 0;
}