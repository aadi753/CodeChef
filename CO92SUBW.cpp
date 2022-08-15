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
		long n;
		cin >> n;

		//ceil and floor of sqrt(n * 2)
		//check station1 => floor
		//check station2 => ceil
		//ans = min(floor + (n - floor), ciel + (ceil - n))

		// long floor1 = sqrt(n);
		// long ceil1 = ceil(sqrt(n));

		// long station1 = (floor1 * (floor1 + 1)) / 2;
		// long station2 = (ceil1 * (ceil1 + 1)) / 2;

		// long dist1 = floor1 + (n - station1);
		// long dist2 = ceil1 + (station2 - n);

		// long ans = dist1;

		// if(dist2 < dist1){
		// 	ans = dist2;
		// }

		// cout << ans << "\n";

		// long long num = 1;
		// long i = 1;

		// while(num <= n){
		// 	num = (i * (i + 1)) / 2;
		// 	i++;
		// }

		// ans = i - 1;

		// num = ((i - 1) * i) / 2;

		// ans += n - num;

		long long ans = 1;

		long long prev, num = 1;
		prev = num;
		long i = 1;

		while(num <= n){
			prev = num;
			i++;
			num = (i * ( i + 1 )) / 2;
		}

		long long dist1 = (i - 1) + (n - prev);

		long long dist2 = (i) + (num - n);

		ans = dist1;

		if(dist2 < dist1){
			ans = dist2;
		}

		cout << ans << "\n";

	}
	return 0;
}