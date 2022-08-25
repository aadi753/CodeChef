#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int arr[1001][1001] = {};

void preprep(){
	//preprep 
	//fill win and lose pos
	//1 == win
	//0 == lose

	arr[0][0] = 1;
	arr[1][2] = 1;
	arr[2][1] = 1;

	//start from 3
	int i = 3;
	int j = 2;

	while((i + j) < 1001){
		arr[i][(i + j)] = 1;
		arr[(i + j)][i] = 1;

		i += (j - 1);
		j++;
	}
}

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
		
		if(arr[m][n] == 0){
		      ans = "Alice";
		}

		cout << ans << '\n';
	}
	return 0;
}