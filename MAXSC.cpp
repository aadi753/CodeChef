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

		//INPUT
		long arr[n][n];

		for(int i = 0; i < n; i++){
			//there are n arrays;
			for(int j = 0; j < n; j++){
				cin >> arr[i][j];
			}
		}

		//PROCESS
		// int flag = 0;
		// long max[n];

		// for(int i = 0; i < n; i++){
		// 	flag = 1;
		// 	for(int j = 1; j < n; j++){

		// 		//the element to be selected must be larger than last element;
		// 		if(arr[i][j] > arr[i][j - 1]){
					
		// 			//if max for this row is not already selected then set it to max 
		// 			//else check if it is > max then set it to max

		// 			if(flag){
		// 				max[i] = arr[i][j];
		// 				flag = 0;
		// 			}
		// 			else if(arr[i][j] > max[i]){
		// 				max[i] = arr[i][j];
		// 			}

		// 		}

		// 	}//end of inner for

		// 	if(flag){
		// 		break;
		// 	}
		// }


		//start selecting max from last 

		long max[n];
		int flag = 0;
		long prev = LONG_MAX;

		for(int i = n - 1; i >= 0; i--){
            //cout << prev << '\n';
			flag = 1;

			for(int j = 0; j < n; j++){
			    
				if(arr[i][j] < prev){
					if(flag){
						max[i] = arr[i][j];
						flag = 0;
					}
					else if(arr[i][j] > max[i]){
						max[i] = arr[i][j];
					}

				}

			    //cout << arr[i][j] << ' ';
			    //just select the max element but the element must be smaller than prev 

				// if((arr[i][j] < prev) && (j == 0 || (arr[i][j] > max[i]))){
				// 	max[i] = arr[i][j];
				// 	flag = 0;
				// }
				// long temp;
				
				// if(j == 0){
				//     temp = arr[i][j];
				// }
				// else if(arr[i][j] > temp){
				//     temp = arr[i][j];
				// }
				
				// if(temp < prev){
				//     max[i] = temp;
				//     flag = 0;
				// }

			}//end of inner for loop
    
            //cout << '\n';
            
			if(flag){
				break;
			}

			prev = max[i];
		}
		
		//OUTPUT
		long long ans = 0;

		if(flag){
			ans = -1;
		}
		else{
			for(int i = 0; i < n; i++){
				ans += max[i];
			}
		}

		cout << ans << "\n";

	}
	return 0;
}

/*
select max from each array at i 
such that max > arr[i - 1]
if there is an array where we can't select max then ans = -1
else ans = sum of max elements;

*/