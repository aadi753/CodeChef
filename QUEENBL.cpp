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
	int a, b;

	cin >> t;
	while(t--){
		
		cin >> a >> b;
		//1 indexed (1 - 8)
		
		a--;
		b--;

		//create the chess board
		
		int board[8][8] = {};

		//place the king
		
		board[a][b] = 1;

		//put queens at "horse places" if those exist
		//default put queens on the top and left 


		if((a > 0 && a < 7) && (b > 1 && b < 6)){
			//a - 1 and b - 2 and a + 1 && b + 2
			board[a - 1][b - 2] = 1;
			board[a + 1][b + 2] = 1;
		}
		else if((b > 0 && b < 7) && (a > 1 && a < 6)){
			board[a - 2][b - 1] = 1;
			board[a + 2][b + 1] = 1;
		}
		else{
			int right = 1;
			int left = 0;

			if(a > 0){
				//up required
				if(b > 1){
					//place at left by default 
					board[a - 1][b - 2] = 2;
				}
				else{
					//if left doesn't exist then in right
					board[a - 1][b + 2] = 2;
					//right queen is not required anymore
					right = 0;
					left = 1;
				}
			}

			if(a < 7){
				//down required
				if(b > 1){
					board[a + 1][b - 2] = 2;
				}
				else{
					board[a + 1][b + 2] = 2;
					//right queen is not required anymore
					right = 0;
					left = 1;
				}
			}

			//if up and down are placed at left then left is not needed
			//else right is not needed

			if(right && (b < 7)){
				//right required
				if(a > 1){
					board[a - 2][b + 1] = 2;
				}
				else{
					board[a + 2][b + 1] = 2;
				}
			}

			if(left && (b > 0)){
				//left required
				if(a > 1){
					board[a - 2][b - 1] = 2;
				}
				else{
					board[a + 2][b - 1] = 2;
				}
			}
		}

		//right queen is required we are placing queens at left 
		

        //print the output
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cout << board[i][j] << ' ';
			}

			cout << '\n';
		}
		
		//cout << '\n';
	}
	return 0;
}

/*

//at max we will need 3
//just remove 
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 2 0 2 0 0 0
0 2 0 0 0 2 0 0
0 0 0 1 0 0 0 0
0 2 0 0 0 2 0 0
0 0 2 0 2 0 0 0
0 0 0 0 0 0 0 0


//top left - right bottom
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 2 0 0 0 0 0
0 0 - - - 0 0 0
0 0 - 1 - 0 0 0
0 0 - - - 0 0 0
0 0 0 0 2 0 0 0
0 0 0 0 0 0 0 0

//top right - left bottom
//when no left or right
//but top and bottom both available
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 2 0 0 0
0 0 - - - 0 0 0
0 0 - 1 - 0 0 0
0 0 - - - 0 0 0
0 0 2 0 0 0 0 0
0 0 0 0 0 0 0 0


//when no top or bottom place to put
//but betwen right and left
//
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 - - - 2 0 0
0 0 - 1 - 0 0 0
0 2 - - - 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

//
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 2 - - - 0 0 0
0 0 - 1 - 0 0 0
0 0 - - - 2 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

//
- - - 2 0 0 0 0
- 1 - 0 0 0 0 0
- - - 2 0 0 0 0
2 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

//when top and left missing 



*/