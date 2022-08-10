#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;

	long arr[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}

	int l;
	cin >> l;

	//calc e1 and e2
	long long e1 = 0, e2 = 0;
	int x, y;

	for(int i = 0; i < l; i++){
		cin >> x >> y;

		x--;
		y--;

		if(e1 != -1){
			//check if it is pos to access [x][y]
			if(x < n && y < m){
				e1 += arr[x][y];
			}
			else{
				e1 = -1;
			}
		}

		if(e2 != -1){
			//check if it is pos to access [y][x]
			if(y < n && x < m){
				e2 += arr[y][x];
			}
			else{
				e2 = -1;
			}
		}
	}

	long long ans = e1;

	if(e2 > e1){
		ans = e2;
	}

	cout << ans << "\n";
	return 0;
}