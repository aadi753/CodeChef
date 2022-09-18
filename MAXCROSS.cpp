#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;

	int arr[n][n] = {};
	char ch;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> ch;
			if(ch == 'X'){
			    arr[i][j] = 1;
			}
		}
	}

	long matrix[8][n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			
			//left to right
			if(arr[i][j]){
			    if(j){
			        matrix[0][i][j] = matrix[0][i][j - 1] + 1;
			    }
			    else{
			        matrix[0][i][j] = 1;
			    }
			}
			else{
				matrix[0][i][j] = 0;
			}
			
			//right to left 
			if(arr[i][n - j - 1]){
				if(j){
					matrix[1][i][n - j - 1] = matrix[1][i][n - j] + 1;
				}
				else{
					matrix[1][i][n - j - 1] = 1;
				}
			}
			else{
				matrix[1][i][n - j - 1] = 0;
			}

			//top to bottom
			if(arr[i][j]){
				if(i){
					matrix[2][i][j] = matrix[2][i - 1][j] + 1;
				}
				else{
					matrix[2][i][j] = 1;
				}
			}
			else{
				matrix[2][i][j] = 0;
			}
			
			//bottom to top
			if(arr[n - i - 1][j]){
				if(i){
					matrix[3][n - i - 1][j] = matrix[3][n - i][j] + 1;
				}
				else{
					matrix[3][n - i - 1][j] = 1;
				}
			}
			else{
				matrix[3][n - i - 1][j] = 0;
			}

			//top left to bottom right
			if(arr[i][j]){
				if(i && j){
					matrix[4][i][j] = matrix[4][i - 1][j - 1] + 1;
				}
				else{
					matrix[4][i][j] = 1;
				}
			}
			else{
				matrix[4][i][j] = 0;
			}

			//BOTTOM RIGHT TO TOP LEFT
			if(arr[n - i - 1][n - j - 1]){
				if(i && j){
					matrix[5][n - i - 1][n - j - 1] = matrix[5][n - i][n - j] + 1;
				}
				else{
					matrix[5][n - i - 1][n - j - 1] = 1;
				}
			}
			else{
				matrix[5][n - i - 1][n - j - 1] = 0;
			}

			//TOP RIGHT TO BOTTOM LEFT
			if(arr[i][n - j - 1]){
				if(i && j){
					matrix[6][i][n - 1 - j] = matrix[6][i - 1][n - j] + 1;
				}
				else{
					matrix[6][i][n - 1 - j] = 1;
				}
			}
			else{
				matrix[6][i][n - 1 - j] = 0;
			}

			//BOTTOM LEFT to TOP RIGHT
			if(arr[n - i - 1][j]){
				if(i && j){
					matrix[7][n - i - 1][j] = matrix[7][n - i][j - 1] + 1;
				}
				else{
					matrix[7][n - i - 1][j] = 1;
				}
			}
			else{
				matrix[7][n - i - 1][j] = 0;
			}
		}
	}

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << matrix[0][i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    
	long a, b, c, d;
    long max;
    
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			
			if(arr[i][j]){
				
				a = matrix[0][i][j] + matrix[1][i][j] - 1;
				b = matrix[2][i][j] + matrix[3][i][j] - 1;
				c = matrix[4][i][j] + matrix[5][i][j] - 1;
				d = matrix[6][i][j] + matrix[7][i][j] - 1;
				
				max = a;
		        if(b > max){
		            max = b;
		        }
		        
		        if(c > max){
		            max = c;
		        }
		        
		        if(d > max){
		            max = d;
		        }
		        
			}
			else{
				max = 0;
			}

			cout << max << ' ';
		}

		cout << '\n';
	}

	
	return 0;
}

/*
10
..X....XX.
XX.X..XX.X
.....XX..X
.XXX..X.X.
.....X..XX
....X....X
X.X....XX.
.X...X.X.X
X.X..X....
..XXXXX.XX

XXXX
XXXX
XXXX
XXXX

0010000120

0010000210

one => x + y - 1
two => x2 + y2 - 1


0020000330
2202
*/