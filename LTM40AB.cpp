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
		int a;
		cin >> a;

		int b;
		cin >> b;

		int c;
		cin >> c;

		int d;
		cin >> d;

		long long ans = 0;

		for(long i = a; i <= b; i++){
			ans += d - max(c, i + 1) - 1;
		}
		// long diff = 0;
		// long diff2 = 0;

		// if((b < a) || (d < c)){
		// 	ans = 0;
		// }
		// else{
		// 	if(a >= c){
		// 		diff = d - a;
		// 	}
		// 	else{
		// 		diff = d - c + 1;
		// 	}
			

		// 	ans += ((diff * (diff + 1)) / 2);

		// 	if(b < d){
		// 		diff2 = d - b - 1;
		// 	}

		// 	ans -= ((diff2 * (diff2 + 1)) / 2);
		// }
		

		// for(int i = a; i <= b; i++){
		// 	int j = i + 1;
		// 	if(j >= c && j <= d){
		// 		ans += (d - i);
		// 	}
		// }

		//diff = d - max(c, a) + 1;
		//if(diff < 0) diff = 0;
		//
		//diff2 = d - b;
		//ans = ((diff * (diff + 1)) / 2) - ((diff2 * (diff2 + 1)) / 2)
		//

		/*
		
		if(b < a || d < c){
			ans = 0;
		}
		else{
			if (a >= c)
				diff = d - a;
			else
				diff = d - c + 1;
		
			if b < d
				diff2 = d - b - 1;
		}
		
		*/


		//start from a, a + 1;
		//and go upto a, d;
		//upto b, b + 1;
		//and upto b, d;
		//

		cout << ans << '\n';

	}
	return 0;
}

/*

we have to start from i + 1 if it is in the range then okay else 
3 1 3 4

3 4 1 8
5 + 4 + 3 + 2 + (1) - ()
8 - 4 = 4 - 1 = 3
3 * 4 / 2 
6


min = a or c;
max = 
2 9 
1 10

2 3
2 10

10-3 = 7

7
3 4
3 10

4 5
4 10


d - max(c, x + 1) + 1

1 10
*/