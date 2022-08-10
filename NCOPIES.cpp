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
		
		string s;
		cin >> s;

		long long sum = 0;

		for(int i = 0; i < n; i++){
			if(s[i] == '1'){
				sum++;
			}
		}

		long ans = 0;

        int curr = 0;
		if(m % 2 == 0){
			//check twice
			if(sum == 0){
			    ans = n * m;
			}
			else{
				for(int i = 0; i < 2; i++){
					for(int j = 0; j < n; j++){
						if(s[j] == '1'){
							curr++;
						}
						if(curr == sum){
							ans++;
						}
					}
				}
			}
		}
		else{
			//check once
			if(sum % 2 == 0){
				for(int i = 0; i < n; i++){
					if(s[i] == '1'){
						curr++;
						
					}
					if(curr == sum / 2){
						ans++;
					}
				}
			}
		}

		cout << ans << "\n";

		// sum = sum * m;

		// long long ans = 0;

		// if(sum == 0){
		// 	ans = n * m;
		// }
		// else if(sum % 2 != 0){
		// 	ans = 0;
		// }
		// else{

		// 	long long mid = sum / 2;
		// 	long long curr_sum = 0;

		// 	int flag = 0;

		// 	for(int i = 0; i < m; i++){
		// 		for(int j = 0; j < n; j++){
		// 			//iterate through 1 to n (m times) - same as coping m times
		// 			if(s[j] == '1'){
		// 				curr_sum++;
		// 			}

		// 			if(curr_sum == mid){
		// 				ans++;
		// 			}
		// 			else if(ans){
		// 				flag = 1;
		// 				break;
		// 			}
		// 		}

		// 		if(flag){
		// 			break;
		// 		}
		// 	}
		// }

		// cout << ans << "\n";


		
	}
	return 0;
}