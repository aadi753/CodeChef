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

		//1 to n => users
		//n + 1 to n + m => admins

		int ans = 0;
		set<int> defaulter;
		unordered_map<int, int> mp;

		int num;

		for(int i = 0; i < k; i++){
			cin >> num;

			if(num <= n){
				auto itr = mp.find(num);

				if(itr != mp.end()){
					defaulter.insert(num);
				}
				else{
					mp[num]++;
				}
			}
			
		}

		cout << defaulter.size() << ' ';
		for(auto i = defaulter.begin(); i != defaulter.end(); i++){
			cout << *i << ' ';
		}

		cout << "\n";
	}
	return 0;
}


// #include<iostream>
// #include <bits/stdc++.h>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;

// 		int m;
// 		cin >> m;

// 		int k;
// 		cin >> k;
		
// 		n++;

// 		//1 to n => users
// 		//n + 1 to n + m => admins

// 		int ans = 0;
// 		set<int> defaulter;
// 		unordered_map<int, int> mp;

// 		int num;

// 		for(int i = 0; i < k; i++){
// 			cin >> num;
// 			if(num < n){
// 				if(mp[num]){
// 					defaulter.insert(num);
// 				}
// 				else{
// 					mp[num]++;
// 				}
// 			}
// 		}

// 		cout << defaulter.size() << ' ';
// 		for(auto i = defaulter.begin(); i != defaulter.end(); i++){
// 			cout << *i << ' ';
// 		}

// 		cout << "\n";
// 	}
// 	return 0;
// }