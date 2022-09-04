#include<iostream>
#include <bits/stdc++.h>
#include<iomanip>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int n;
int arr[100][100];
long sum[100][100];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n;

		//int arr[n][n];


		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> arr[i][j];

				if(i && j){
					sum[i][j] = max(sum[i - 1][j], sum[i][j - 1]) + arr[i][j];
				}
				else if(i){
					sum[i][j] = sum[i - 1][j] + arr[i][j];
				}
				else if(j){
					sum[i][j] = sum[i][j - 1] + arr[i][j];
				}
				else{
					sum[i][j] = 0;
				}
			}
		}

		long max_sum = sum[n - 1][n - 1];


		if(max_sum < 0){
			cout << "Bad Judges";
		}
		else{
			//int count = (n - 1) + (n - 2);
			int count = (2 * n) - 3;
			double ans = (double) max_sum / count;
			cout << fixed << setprecision(6) << ans;
		}

		cout << "\n";

	}
	return 0;
}


// #include<iostream>
// #include <bits/stdc++.h>
// #include<iomanip>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// int n;
// int arr[100][100];

// long long get_path_sum(int i, int j, long long ans){
	
// 	if(i == (n - 1) && j == (n - 1)){
// 		return 0;
// 	}

// 	if(i == n || j == n){
// 		return 0;
// 	}

// 	ans += arr[i][j] + max(get_path_sum(i + 1, j, ans), get_path_sum(i, j + 1, ans));

// 	return ans;
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;

// 		//int arr[n][n];

// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cin >> arr[i][j];
// 			}
// 		}

// 		long long max_sum = get_path_sum(0, 0, 0);


// 		if(max_sum < 0){
// 			cout << "Bad Judges";
// 		}
// 		else{
// 			int count = (n - 1) + (n - 2);
// 			double ans = (double) max_sum / count;
// 			cout << fixed << setprecision(6) << ans;
// 		}

// 		cout << "\n";

// 	}
// 	return 0;
// }

/*
always a square matrix
0 -
- 0

0 - - 
- - -
- - 0

0 - - - 
- - - - 
- - - -
- - - 0
n - 1 + n - 2

0 1
2 0

use recursion to get max sum

if(curr == (n, n))
	return 0;
if(curr != exist)
	return 0;

ans = ans + curr + max(get_sum(left, ans), get_sum(bottom, ans));
return ans;
*/