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
	int n;
	cin >> t;

	while(t--){
		
		cin >> n;

		//read A
		long long a;
		cin >> a;

		//max value we can achive 
		//a + //a is known
		//max she can choose 10^n - 1
		//max we can choose 10^n - 1
		//we choose 2 more numbers 
		//she chooses 2 more

		//S = 10n + 10n + a

		//if she chooses max nums => a + 10n - 1 + 10n - 1
		//we will choose => 1 + 1

		//else if she chooses 1s => a + 1 + 1
		//we will choose => 10n - 1 + 10n - 1

		//at first turn sum = a;
		//then at each turn we just complete the 10^n number

		long long max = pow(10, n);
		long long sum = max * 2;
		sum += a;

		//print S
		cout << sum << endl;

		//read B
		long long b;
		cin >> b;

		//Print C
		cout << max - b << endl;

		//Print D
		long long d;
		cin >> d;

		//Print E
		cout << max - d << endl;

		//Get verdict 
		int verdict;
		cin >> verdict;

		//terminate if wrong ans
		if(verdict == -1){
			return 0;
		}
	}
	return 0;
}