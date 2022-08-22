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
		long n;
		cin >> n;

		std::map<long, int> mp;

		long num;
		for(int i = 0; i < n; i++){
			cin >> num;

			mp[num]++;
		}

		//find the max freq

		int max = 0;
		for(auto itr = mp.begin(); itr != mp.end(); itr++){
			if(itr -> second > max){
				max = itr -> second;
			}
		}


		string ans = "Yes";

		int limit = n / 2;

		if(n % 2){
			//max = (n / 2) + 1
			limit++;
		}

		if(max > limit){
			ans = "No";
		}

		cout << ans << "\n";
	}
	return 0;
}
/*
//at most frequency allowed for even => n / 2
6
1 2 1 2 1 2
4 
1 2 1 2

for odd => 

5 => (n / 2) + 1
1 2 1 2 1

*/
