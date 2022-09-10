#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin >> n;

	long q;
	cin >> q;

	//calculate n + 1 th term
	//ans = f[num % (k + 1)];
	long long XOR;
	long arr[n + 1];
	arr[0] = 0;
	
	long long numb;
	for(long i = 0; i < n; i++){
		cin >> numb;
		arr[i + 1] = arr[i] ^ numb;
	}
	
// 	for(int i = 0; i <= n; i++){
// 	    cout << arr[i] << ' ';
// 	}
// 	cout << '\n';


	long num;
	for(long i = 0; i < q; i++){
		cin >> num;
		num = num % (n + 1);

		cout << arr[num] << '\n';
	}
}

/*
0 1 2 3 0 1 2 3 0 1 2 3 0 1 2 3
0 0 1 3 0 0 1 3 0 0 1 3
0 1 2 3 4 5 6 7 8 9 10 11
5
4
4 % 4
01
10
11
00 


*/