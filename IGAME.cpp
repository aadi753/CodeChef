#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int arr[1001][1001] = {};


void preprep(){
	//fill array with win and lose positions
	//1 = WIN for alice

	for(int i = 0; i < 1001; i++){
		for(int j = 0; j < 1001; j++){
			//make the same row and col as win positions
			//and also diagonals

			if(arr[i][j]==0){
				//for column
				for(int k = i + 1; k < 1001; k++){
					arr[k][j] = 1;
				}

				//for row
				for(int k = j + 1; k < 1001; k++){
					arr[i][k] = 1;
				}

				//for diagonal
				for(int k = 1; ((i + k) < 1001 && (j +  k) < 1001) ; k++){
					arr[i+k][j+k] = 1;
				}
			}
			
		}
	}
}


// void preprep(){
// 	//preprep 
// 	//fill win and lose pos
// 	//1 == win
// 	//0 == lose

// 	arr[0][0] = 1;
// 	arr[1][2] = 1;
// 	arr[2][1] = 1;

// 	//start from 3
// 	int i = 3;
// 	int j = 2;

// 	while((i + j) < 1001){
// 		arr[i][(i + j)] = 1;
// 		arr[(i + j)][i] = 1;

// 		i += (j - 1);
// 		j++;
// 	}
// }

// void printprep(){
// 	for(int i = 0; i < 100; i++){
// 		for(int j  = 0; j < 100; j++){
// 		    cout << arr[i][j] << " ";
// 		}

// 		cout << "\n";
// 	}
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//preprocessing the WIN Spaces
	preprep();

	//printprep();

	int t;
	int m, n, p, q;
	
	cin >> t;
    
	while(t--){
		
		cin >> m >> n >> p >> q;

		//shift the origin to (0,0) that is 
		//m = m - p
		//n = n - q

		m = m - p;
		n = n - q;

		string ans = "Bob";
		
		//m or n are going out of range
		//why
		//1000 1000 0 0
		
		if(arr[m][n]){
		      ans = "Alice";
		}

		cout << ans << '\n';
	}
	return 0;
}

/*


- * * * * *	* * *
* * 0 * * * * * *
* 0 * * * * * * *
* * * * * 0 * * *
* * * * * * * 0 *
* * * 0 * * * * * * *
* * * * * *	* * * * 0
* * * * 0 *	* * * * *
* * * * * *	* * * * *
* * * * * *	* * * * *
* * * * * *	0 * * * *
* * * * * *	* * * * *
0 0

1 2
2 1

3 5
5 3

4 7
7 4

6 10
10 6 

9 15
15 9
 


*/