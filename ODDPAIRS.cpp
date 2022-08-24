#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

// long long arr[1000000002];

// void fill_array(){
// 	arr[0] = 0;
// 	arr[1] = 0;

// 	for(long i = 2; i < 1000000002; i++){
// 		arr[i] = arr[i - 1] + (i / 2);
// 	}
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		long n;
// 		cin >> n;

// 		// long long ans = 0;
// 		// for(long i = 2; i < n; i++){
// 		// 	ans += (i / 2);
// 		// }

// 		// ANS = ((N / 2) ^ 2) * 2 + (N / 2)

// 		long half = n / 2;

// 		long long ans = (pow(half, 2) * 2);

// 		if(n % 2){
// 			ans += half;
// 		}

// 		cout << ans << '\n';
// 	}
// 	return 0;
// }


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	long long n;
	cin >> t;
	while(t--){
		
		cin >> n;
		
		long long half = n / 2;
        long long two = 2;
        
		long long ans = (half * half);
        
		if(n % 2){
			ans += half;
		}

		cout << (ans * two) << '\n';
	}
	return 0;
}

/*
1
0

2
1 + 2
1

3
1 + 2
2 + 3
2

4
1 + 2
2 + 3
1 + 4
3 + 4
4

5 
1 + 2
2 + 3
1 + 4 
3 + 4
2 + 5
4 + 5
6

6
6 + 3
6 + 1
6 + 5
9

7
2+7
4+7
6+7
12


arr[i] = arr[i - 1] + i / 2
0 1 2 4 6 9 12 16 20 25 30 36
1 2 3 4 5 6 7 8 9
1 4 9 16 25
(n / 2) ^ 2 
*/