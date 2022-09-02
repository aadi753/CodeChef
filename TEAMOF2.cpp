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

		int arr[n][5] = {};

		int num;
		int q;

		for(int i = 0; i < n; i++){
			cin >> num;
			for(int j = 0; j < num; j++){
				cin >> q;
				arr[i][q - 1] = 1;
			}
		}

		int flag = 0;
		string ans = "NO";

		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
	
				flag = 1;

				for(int k = 0; k < 5; k++){
					if(arr[j][k] || arr[i][k]){
						continue;
					}
					else{
						flag = 0;
						break;
					}
				}

				if(flag){
					ans = "YES";
					break;
				}
			}

			if(ans == "YES"){
				break;
			}
		}

		cout << ans << "\n";
		
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

// 		//map of students and there solved questions 
// 		map<int, vector<int>> mp;
// 		int num;
// 		int q;

// 		for(int i = 0; i < n; i++){
			
// 			vector<int> a;
			
// 			cin >> num;
// 			for(int j = 0; j < num; j++){
// 				cin >> q;
// 				a.push_back(q);
// 			}

// 			mp[i] = a;
// 		}


// 		for(auto itr = mp.begin(); itr != mp.end(); itr++){
// 			vector<int> temp = itr -> second;

// 			cout << itr -> first << ": ";
			
// 			//make a list of all the numbers missing from this student's list
// 			// and then check if someone else did them all??
			
// 			for(int i = 0; i< temp.size(); i++){
// 				cout << temp[i] << ' ';
// 			}

// 			cout << "\n";
// 		}

// 	}
// 	return 0;
// }