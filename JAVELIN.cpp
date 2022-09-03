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

		int m;
		cin >> m;

		int k;
		cin >> k;

		std::map<int, int> mp;

		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			mp[num] = i + 1;
		}

		//select the first k people atleast and then keep selecting if m < num
		std::vector<int> ans;
		for(auto itr = mp.rbegin(); itr != mp.rend(); itr++){
			if(itr -> first >= m || ans.size() < k){
				ans.push_back(itr -> second);
				// k--;
			}
			// else if(itr -> first >= m){
			// 	ans.push_back(itr -> second);
			// }
		}

		sort(ans.begin(), ans.end());

		int x = ans.size();
		cout << x << " ";
		for(int i = 0; i < x; i++){
			cout << ans[i] << ' ';
		}

		cout << "\n";

	}
	return 0;
}