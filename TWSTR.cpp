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
	
	string recipe;
	long priority;

	map<int, string> mp;

	for(int i = 0; i < n; i++){
		cin >> recipe >> priority;
		mp[priority] = recipe;
	}
    
	int q;
	cin >> q;

	string query;
	for(int i = 0; i < q; i++){
		cin >> query;

		string ans = "NO";

		for(auto itr = mp.rbegin(); itr != mp.rend(); itr++){
// 			string x = (itr -> second).substr(0, query.size());
// 			cout << x << "\n";
			if((itr -> second).substr(0, query.size()) == query){
				ans = itr -> second;
				break;
			}

            //cout << itr -> first << " " << itr -> second << '\n';
		}

		cout << ans << "\n";
	}

	return 0;
}