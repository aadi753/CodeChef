#include<iostream>
#include <bits/stdc++.h>
//#import<math.h>
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

		long num;
		long ans;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(i){
				ans = __gcd(ans, num);
			}
			else{
				ans = num;
			}
		}

		cout << (ans * n) << "\n";
	}
	return 0;
}

/*
7 10 12
7 3 5 
4 3 2
2 1 2
1 1 1  

8 12 20
8 4 12
4 4 8
4 4 4 


36 45 98
36 9 62
27 9 53
18 9 46
9 9 37
28
19
10
1
1
1

36 45 90
36 9 81
36 9 9 
9 9 9

*/