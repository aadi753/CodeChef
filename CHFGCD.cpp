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
		long x, y;
		cin >> x >> y;

		//find if gcd > 1 already 

		int ans = 0;

		long gcd_x_y = gcd(x, y);

		if(gcd_x_y > 1){
			ans = 0;
		}
		else if(x % 2 == 0 || y % 2 == 0){
			ans = 1;
		}
		else{
			//both nos. are odd!!
			//check if they have gcd > 1 by increasing x by 1
			x++;
			gcd_x_y = gcd(x, y);
			if(gcd_x_y > 1){
				ans = 1;
			}
			else{
				//check if they have gcd > 1 by increasing y by 1
				x--;
				y++;

				gcd_x_y = gcd(x, y);
				if(gcd_x_y > 1){
					ans = 1;
				}
				else{
					//if non of that worked it is best to make both divisible by 2
					ans = 2;
				}
			}
		}

		cout << ans << "\n";

	}
	return 0;
}