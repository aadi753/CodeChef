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

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int ans = 0;

		//calc frequencies and ans = n - max(freq)
		sort(arr, arr + n);

		int curr = 1;
		int max = 0;

		for(int i = 1; i < n; i++){
			if(arr[i] == arr[i - 1]){
				curr++;
			}
			else{
				if(curr > max){
					max = curr;
				}
				curr = 1;
			}
		}

		if(curr > max){
			max = curr;
		}

		if(n <= 2){
			ans = 0;
		}
		else{
			ans = n - max;

			if(ans > n - 2){
				ans = n - 2;
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

// 		long num;
// 		std::map<long, int> mp;

// 		for(int i = 0; i < n; i++){
// 			cin >> num;
//             auto itr = mp.find(num);
//             if(itr != mp.end()){
//                 mp[num]++;
//             }
//             else{
//                 mp[num] = 1;
//             }
			
// 		}

// 		int ans = 0;

// 		//calc frequencies and ans = n - max(freq)
		
// 		int curr = 1;
// 		int max = 0;

// 		for(auto itr = mp.begin(); itr != mp.end(); itr++){
// 			if(itr -> second > max){
// 				max = itr -> second;
// 			}
// 		}

		

// 		if(n <= 2){
// 			ans = 0;
// 		}
// 		else{
// 			ans = n - max;

// 			if(ans > n - 2){
// 				ans = n - 2;
// 			}
// 		}

// 		cout << ans << "\n";
// 	}
// 	return 0;
// }