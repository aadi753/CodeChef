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
		int x1, y1, x2, y2, a1, a2, b1, b2;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> a1 >> b1 >> a2 >> b2;

		long long area1 = (x2 - x1) * (y2 - y1);
		long long area2 = (a2 - a1) * (b2 - b1);

		//sub the common area

		int min_x = 0, min_y = 0, max_x = 0, max_y = 0;

		min_x = max(x1, a1);
		min_y = max(y1, b1);

		max_x = min(x2, a2);
		max_y = min(y2, b2);

		//if it is a rectangle 
		//then they have something in common

		long long common = 0;

		if((max_x >= min_x) && (max_y >= min_y)){
			common = (max_x - min_x) * (max_y - min_y);
		}

		long long ans = area1 + area2 - common;

		cout << ans << '\n';

		//if (a1, b1) between first

		// if((a1 >= x1 && a1 <= x2) && (b1 >= y1 && b1 <= y2)){
		// 	min_x = a1;
		// 	min_y = b1;
		// }
		// else if((x1 >= a1 && x1 <= a2) && (y1 >= b1 && y1 <= b2)){
		// 	min_x = x1;
		// 	min_y = y1;
		// }

		// if(min_x && min_y){
		// 	if((a2 >= x1 && a2 <= x2) && (b2 >= y1 && b2 <= y2)){
		// 		max_x = a2;
		// 		max_y = b2;
		// 	}
		// 	else if((x2 >= a1 && x2 <= a2) && (y2 >= b1 && y2 <= b2)){
		// 		max_x = x2;
		// 		max_y = y2;
		// 	}
		// }
	}
	return 0;
}