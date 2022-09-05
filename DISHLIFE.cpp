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

		int arr[k] = {};

		std::map<int, vector<int>> mp;
		
		int m;
		int ingredient;

		for(int i = 0; i < n; i++){
			cin >> m;

			vector<int> temp;

			for(int j = 0; j < m; j++){
				cin >> ingredient;
				temp.push_back(ingredient - 1);
				arr[ingredient - 1]++;
			}

			mp[i] = temp;
		}

		string ans = "all";
		for(int i = 0; i < k; i++){
			if(!arr[i]){
				ans = "sad";
				break;
			}
		}

		if(ans == "all"){
			for(auto itr = mp.begin(); itr != mp.end(); itr++){
				
				vector<int> temp = itr -> second;
				int flag = 1;

				for(int j = 0; j < temp.size(); j++){
					if(arr[temp[j]] == 1){
						flag = 0;
						break;
					}
				}

				if(flag){
					ans = "some";
					break;
				}
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}