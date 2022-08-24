#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	long n;

	cin >> t;
	while(t--){

		cin >> n;

		long long sum_a = 0, sum_b = 0, sum = 0;
		long curr;

		long arr[n];

		long num;
		for(int i = 0; i < n; i++){
			cin >> num;
			sum_a += num;

			arr[i] = num;
		}

		for(int i = 0; i < n; i++){
			cin >> num;
			sum_b += num;

			curr = num - arr[i];
			
			if(curr < 0) curr = 0 - curr;

			sum += curr;
		}

		long long ans = -1;

		if((sum_a == sum_b) && ((sum % 2) == 0)){
			ans = sum / 2;
		}

		cout << ans << "\n";

	}
	return 0;
}

/*
arrays are already same 
sum = 0
ans = 0


all elements differ by 1 
2 1 1 1 == 5
1 2 2 2 == 7

2 1 = 3
1 2 = 3

4 6 8 => 18
5 7 6 => 18

thiers sums must also be equal
*/