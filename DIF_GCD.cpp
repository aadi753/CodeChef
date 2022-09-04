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

		
	}
	return 0;
}