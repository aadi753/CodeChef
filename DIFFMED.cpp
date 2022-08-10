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
		int n;
		cin >> n;

		int sign;
		int mid;

		if(n % 2 == 0){
			//even then mid = n / 2
			//go through 1 to n - 1
			//switching the signs every time
			//start with +

			mid = n / 2;
			sign = -1;
		}
		else{
			//odd
			//then mid = (n + 1) / 2
			//go through 1 to n - 1
			//switching the signs every time
			//start with -

			mid = (n + 1) / 2;
			sign = 1;
		}

		int num = mid;

		int arr[n];

		for(int i = 0; i < n; i++){

			num += (sign * i);

			sign = -sign;
			arr[n - i - 1] = num;
		}

		for(int i = 0; i < n; i++){
			cout << arr[i] << ' ';
		}

		cout << "\n";

	}
	return 0;
}