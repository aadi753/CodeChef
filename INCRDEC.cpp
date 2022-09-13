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

		string ans = "YES";
		int num;
		std::map<int, int> mp;

		for(int i = 0; i < n; i++){
			cin >> num;

			mp[num]++;
			if(mp[num] > 2){
				ans = "NO";
			}
		}

		//if max appears twice then NO
		//or if any other element appears 3 times then NO
		//else "YES"
		//print all the numbers in increasing order 
		//then print all the remianing elements in a decresing order
		
		if(ans == "YES"){
			//check if last element appears twice
			if(mp.rbegin() -> second == 2){
				cout << "NO";
			}
			else{
				//ans is "YES"
				cout << "YES" << '\n';
				for(auto itr = mp.begin(); itr != mp.end(); itr++){
					cout << itr -> first << ' ';
					(itr -> second)--;
				}

				//decreasing 
				for(auto itr = mp.rbegin(); itr != mp.rend(); itr++){
					if(itr -> second){
						cout << itr -> first << ' ';
					}
				}
			}
		}
		else{
			cout << "NO";
		}

		

		cout << "\n";

	}
	return 0;
}

/*

*/