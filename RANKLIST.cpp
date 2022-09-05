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
		long s;
		cin >> s;

		//sum of elements from 1 to n = (n) * (n + 1) / 2

		//long total = (n * (n + 1)) / 2;

		//diff = total - s;
		//now we need to find out what and how many numbers are there of same 
		//max number available in list = n
		//and last element is not n then total - 1 will be the sum
		//1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12
		//remaining sum = total - curr (curr = i * (i + 1) / 2)
		//when s -= curr
		//when rem > s;
		//ans = n - i;
		//1 + 2 + 3 => 6
		//1 => curr = 1, rem = 5, s = 4
		//1 + 2 => curr = 3, rem = 2, s = 1
		//s < rem
		//ans = n - i;
		//1 => c = 1, r = 5, s = 2
		//1 + 2 => c = 3, r = 3, s = 0
		//1 + 2 + 3 => c = 6, r = 0, s = -2;
		/*
			at least i + 1 + n - i should be remaining to fill the next ones
			//at least equal to n to fill the next
			
			3 3
			1 : s = 2
			ans = n - i;

			3 4
			1 : s = 3
			2 : s = 1
			ans = n - i;

			3 5
			1 : s = 4
			2 : s = 2
			ans = n - i

			3 6 
			s = 5 , 3 , 0
			ans = n - i;


	
		*/


// 		long curr;
// 		long rem = total;
		
		long ans = 0;

		for(int i = 1; i <= n; i++){
			s -= i;

			if(s < n){
				ans = n - i;
				break;
			}
		}

		cout << ans << "\n";

	}
	return 0;
}