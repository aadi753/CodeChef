#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
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

		//find the power x in 2^x < n;

		//max 2^x - 2 ^ (x - 1) or (1 + n - 2 ^ x) 

		long num = n;
		int x = -1;

		while(num > 0){
			x++;
			num = num / 2;
		}

		long long one = 0, two = 0;

		if(x > 0){
			one = pow(2, x) - pow(2, (x - 1));
		}

		two = (1 + (n - pow(2, x)));

		long long ans = two;

		if(one > two){
			ans = one;
		}

		cout << ans << "\n";

	}
	return 0;
}