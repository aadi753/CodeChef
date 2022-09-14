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
		long x;
		cin >> x;
		long y;
		cin >> y;

		string ans = "NO";

		//Vertical Lines;
		/*
			vertical lines lie at
			x = 2k + 1, -2k < y < 2k + 2
			x = -2k, -2k <= y <= 2k
		*/
		long k;

		if((x - 1) % 2 == 0){
			//then k = (x - 1) / 2
			k = (x - 1) / 2;

			if(((-2 * k) <= y) && (y <= ((2 * k) + 2))){
				ans = "YES";
			}
		}

		if(ans == "NO"){
			if(x % 2 == 0){
				k = -(x / 2);

				if(((-2 * k) <= y) && (y <= 2 * k)){
					ans = "YES";
				}
			}
		}

		//Horizontal Lines;
		/*
			y = 2k , -2k <= x <= 2k - 1
			y = -2k , -2k <= x <= 2k

		*/

		if(ans == "NO"){
			if(y % 2 == 0){
				k = (y / 2);

				if(((-2 * k) <= x) && (x <= ( 2 * k) - 1)){
					ans = "YES";
				}
			}
		}

		if(ans == "NO"){
			if(y % 2 == 0){
				k = -(y / 2);

				if(((-2 * k) <= x) && (x <= ( 2 * k))){
					ans = "YES";
				}
			}
		}

		

		cout << ans << "\n";

	}
	return 0;
}


/*
vertical and horizontal lines

vertical lines lie at
x = 2k + 1, -2k < y < 2k + 2
x = -2k, -2k <= y <= 2k

//Horizontal Lines
y = 2k , -2k <= x <= 2k - 1
y = -2k , -2k <= x <= 2k

if the coordinates satisfy any one of the conditions then it lies on track

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * * * * * * * * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 0 0 0 0 0 * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 * * * * 0 * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 * 0 0 * 0 * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 * 0 * * 0 * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 * 0 0 0 0 * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 * * * * * * 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * 0 0 0 0 0 0 0 0 * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 * * * * * * * * * * 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 


*/