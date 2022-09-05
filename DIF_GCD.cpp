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
		
		long m;
		cin >> m;


		//find a and b between 1 and m such that gcd(a, b) >= n
		long a, b;
		//gcd is never bigger than the smaller number
		//so start with a = n
		//and b = m
		//check the maximum multiple of n that lies below =m
		//then go to n + 1 and do the same while(a * x <= m)

		long i = n;
		long j = i;
		long x;

		long max = -1;
		long long curr = -1;

		while(i < (2 * n)){
			//break when diff < max
			//check for the higest multiple of i
			//x = m / i;
			//j = x * i;
			//diff = j - i;
			//in worst case it will be i = 5 and x = 6 / 5 = 1 and j = i * x;
			//8 9 10 11 12 13 14 15 16 17
			x = m / i;
			j = x * i;

			curr = j - i;

// 			if(curr < max){
// 				break;
// 			}

			if(curr > max){
			    max = curr;
			    a = i;
			    b = j;
			}
		
			i++;
		}	

		cout << a << ' ' << b << "\n";
		
	}
	return 0;
}