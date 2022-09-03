#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

//create a function that recursively checks if any of the combinations lead to the sum == 0
bool is_possible(int arr[], int n, int k){
	if(k == 0){
		return true;
	}

	if(n < 0 || k < 0){
		return false;
	}

	if(is_possible(arr, n - 1, k - arr[n]) || is_possible(arr, n - 1, k)){
		return true;
	}
	else{
		return false;
	}
}

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

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		string ans = "No";

		if(is_possible(arr, n - 1, m)){
			ans = "Yes";
		}
		
		cout << ans << '\n';

		//sum can never be made of numbers > m
		// int j = n - 1;
		// while(j >= 0 && arr[j] > m){
		// 	j--;
		// }
		
		// for(int i = 0; i <= j; i++){
		//     cout << arr[i] << ' ';
		// }
		// cout << "\n";

		// int i = 0;
		// int k = 0;
		// string ans = "No";
		
		// long total = 0;

		// while((i <= j) && (k <= i)){
		// 	//start adding 
		// 	if(total < m){
		// 		total += arr[i];
		// 		i++;
		// 	}
		// 	else if(total > m){
		// 		total -= arr[k];
		// 		k++;
		// 	}
			
		// 	if(total == m){
		// 	    ans = "Yes";
		// 		break;
		// 	}
			
		// }
		
		// if(total == m){
		//     ans = "Yes";
		// }

		// cout << ans << "\n";

	}
	return 0;
}

/*

5

3 3
1
1
1

5 11
1
2
4
8
16
5 23
1
2
4
8
16

23 - 16 || 23
7 || 13
7 - 8 || 7 || 13 - 8 || 13 
-1 || 7 || 5 || 13 
-1 - 4 || -1 || 7 - 4 || 7 || 5 - 4 || 5 || 13 - 4 || 13 
-5 || -1 || 3 || 7 || 1 || 5 || 9 || 13
-7 || -5 || -3 || -1 || 1 || 3 || 5 || 7 || -1 || 3 || 5 || 7 || 9 || 11 || 13 
|| -8 || -6 || -4 || -2 || 0
5 13
1
5
5
10
10

13 - 10 || 13
3 || 13
3 - 10 || 3 || 13
-7 || 3 || 3 || 13
-7 - 5 || -2 || -2 
20 132
17
6
4
998
254
137
259
153
154
3
28
19
123
542
857
23
687
35
99
999

7 + 8 15
15 - 1
14 - 2 
12 - 4

*/
