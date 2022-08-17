#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;

	if(n % 2){
		//n is odd then no posible ans
		cout << -1;
	}
	else{
		cout << 0 << ' ' << (n / 2) << '\n';
		cout << (n / 2) << ' ' << 0 << '\n';
		cout << n << ' ' << (n / 2) << '\n';
		cout << (n / 2) << ' ' << n << '\n';
	}

	cout << "\n";
	return 0;
}