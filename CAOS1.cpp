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
		int r;
		cin >> r;
		
		int c;
		cin >> c;

		int arr[r][c] = {};

		char ch;

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> ch;
				if(ch == '^'){
					arr[i][j] = 1;
				}
			}
		}

		int ans = 0;

		if(r > 4 && c > 4){
			for(int i = 2; i < r - 2; i++){

				for(int j = 2; j < c - 2; j++){

					//check if right left up and down are all 1's
					if(arr[i][j]){
						//It is not a wall 
						//UP
						if(arr[i - 2][j] && arr[i - 1][j]){
							//DOWN
							if(arr[i + 2][j] && arr[i + 1][j]){
								//LEFT
								if(arr[i][j - 2] && arr[i][j - 1]){
									//RIGHT
									if(arr[i][j + 2] && arr[i][j + 1]){
										ans++;
									}
								}
							}
						}
					}
					
				}
			}
		}

		cout << ans << "\n";
	}
	return 0;
}