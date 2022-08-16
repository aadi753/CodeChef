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

		x = abs(x);
		y = abs(y);
		
		long ans = 0;

		if(x >= y){
			//find x,x + 1 and diff = x+1 - y
			//if diff = odd then ans -1 else -0
			ans = x + x + 1;

			if((x + 1 - y) % 2 == 1){
				ans--;
			}
		}		
		else{
			//find y - 1, y and diff = y - 1 - x
			//if diff is odd then +1 else +0
			ans = y + y - 1;

			if((y - 1 - x) % 2 == 1){
				ans++;
			}
		}

		cout << ans << "\n";
	}
	return 0;
}