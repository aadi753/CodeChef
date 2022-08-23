#include<iostream>
#include <bits/stdc++.h>
#include<iomanip>
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
		double n;
		cin >> n;

		double ans;

		
		if(n >= 0.5)
			ans = 10000.0 + 10000.0 * (1.0 - n) * (2.0 * n - 1.0);
		else
			ans = 10000.0 + 10000.0 * n * (1.0 - 2.0 * n);

		// if(n >= 0.5){
		// 	ans = 10000.0 + 10000.0 * 2.0 * (1.0 - n);
		// }	
		// else{
		// 	ans = 10000.0 + 10000.0 * 2.0 * (n);
		// }

		//just bet all money on the team with more probab of wining 
		

		// float max = n;

		// if((1.0 - n) > max){
		// 	max = 1.0 - n;
		// }

		// //ans = (2 * (1 - max)) * 10000

		// float ans = (2 * (1 - max)) * 10000.0;

		cout << fixed << setprecision(7) << ans << '\n';

	}
	return 0;
}

/*

******************************************
n (2 * m * x - y) + m (2 * n * y - x)
2nmx - ny + 2nmy - mx
x (2nm - m) + y (2nm - n)

if n >= 0.5
	bet all on 1 => x = 10000, y = 0
	10000 * (2 * n * (1 - n) - (1 - n))
	10000 * (1 - n) * (2 * n - 1)
else 
	bet all on 2 => y = 10000, x = 0
	10000 * (2 * (1 - n) * n - n)
	10000 * n * (2(1 - n) - 1)
	10000 * n * (2 - 2n - 1)
	10000 * n * (2n - 1)
*******************************************

//a = 0.98

10000 + 10000 * 0.02 * 0.96

0.98 ((2 * 0.02 * x) - y) + 0.02 ((2 * 0.98 * y) - x)
(0.98 * 2 * 0.02 * x) - (0.98 * y) + (0.02 * 2 * 0.98 * y) - (0.02 * x)
x * (0.98 * 2 * 0.02 - 0.02) + y * (0.02 * 2 * 0.98 - 0.98)
x * (0.0192) - y * (0.9408)



10000 * 0.0192
192 + 10000
10192

10000 + 10000 * (0.02) * 2
10000 + 400

2 * (1 - 0.51) * 10000
*/

/*

0.49



10000 + 10000 * 0.49 * (1 - 2 * 0.49)

10000 + 10000 * 0.49 * 0.02
*/