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
		//row
		long n;
		cin >> n;

		//colunmn
		long m;
		cin >> m;
		
		/*
		//ans array 
		long long arr[n][m];
		long long diff;

		if(m < n){
			//swap the values;
			for(int j = 0; j < m; j++){
				diff = (2 * j) + 1;
				for(int i = 0; i < n; i++){
					if(i){
						arr[i][j] = arr[i - 1][j] + diff;
					}
					else{
						arr[i][j] = diff;
					}
				}
			}
		}
		else{
			for(long i = 0; i < n; i++){
				diff = (2 * i) + 1;
				for(long j = 0; j < m; j++){
					if(j){
						arr[i][j] = arr[i][j - 1] + diff;
					}
					else{
						arr[i][j] = diff;
						//when j = 0
						//for first element of the row 
						//we set the diff for this row 
						//and set the first element

					// 	if(i){
					// 		arr[i][j] = arr[i - 1][j] + 2;
					// 	}
					// 	else{
					// 		arr[i][j] = 1;
					// 	}
					}
				}//end col for loop				
			}//end row for loop
		}
		*/

		int flag = 1;
		if(n > m){
			flag = 0;
		}

// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < m; j++){
// 				if(flag){
// 					cout << (2 * i + j + 2 * i * j + 1) << ' ';
// 				}
// 				else{
// 					cout << (2 * j + i + 2 * i * j + 1) << ' ';
// 				}
// 			}

// 			cout << '\n';
// 		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(flag){
					cout << (1 + ((n + 1) * i) + (j * (i + 1))) << ' ';
				}
				else{
					cout << (1 + i + (j * (m + 1 + i))) << ' ';
				}
			}

			cout << '\n';
		}


		// for(int i = 0; i < n; i++){
		// 	for(int j = 0; j < m; j++){
		// 		cout << arr[i][j] << ' ';
		// 	}
		// 	cout << '\n';
		// }
		





	}
	return 0;
}


/*
i = 0
j = 1
j = 2
j = 3

((i * 2) + 1) + ((j) * (2 * i + 1))
(1 + 2i) + (2i + 1) * j
(j + 1)(1 + 2i)
j + 1 + 2ij + 2i
2i + j + 2ij + 1

i = 1, j = 2
2 + 1 + 2 * 2
7 

i = 2 j = 2
4 + 1 = 5 + 5 * 2 = 15
3 + 3 + 6

1 2 3 4
3 6 9 12
5 10 15 20


((2 * j) + 1) + ((2 * j + 1) * i)
(i + 1) (2j + 1)

(2j + i + 2ij + 1)

1 3 5
2 6 10
3 9 15
4 12 20


*/