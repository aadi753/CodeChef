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

		std::map<int, int> mp;
		int num;

		for(int i = 0; i < n; i++){
			cin >> num;
			mp[num]++;
		}

		int max = mp.begin() -> first;

		for(auto itr = mp.begin(); itr != mp.end(); itr++){
			if(mp[itr -> first] > mp[max]){
				max = itr -> first;
			}
		}

		//we have the element with max frequency 
		//the number of operations = n - freq
		//if the freq < 2 then ans = -1
		int ans = 0;
		int req = n - mp[max];

		if(req){
			if(mp[max] < 2){
				ans = -1;
			}
			else{
				ans = req + 1;
			}
		}

		cout << ans << '\n';

	}
	return 0;
}

/*
1
1
2


we need the most frequent element
1 2 1 3 1 2 1 4

1
2
1
3
1
2
1
4

1 2 3 4 1
1
1



*/