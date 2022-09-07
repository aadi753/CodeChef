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
		int x;
		cin >> x;

		int y;
		cin >> y;

		int a = -1000, b;

		long num = (3 * x) - y;

		//a + b = num 
		//b = num - a;
		//int a = -1000;
		//b = 1000

		while(a <= y){
			b = num - a;

			if(b < 1001){
				break;
			}

			a++;
		}

		cout << a << ' ' << y << ' ' << b << '\n';
	}
	return 0;
}

/*
a + b = (3x - y)
a + b + c = 3x

3 

|a| < 1000 
	& 
|b| < 1000

3
5 5
67 100
4 5

15 - 5 = 10 = a + b;
a >= -1000 and a <= y
b >= y and b <= 1000
*/	