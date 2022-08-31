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

		long ans = 0;
		int num;

		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cin >> num;
				if(i > 0 && i == j){
					ans += (n - num);
				}
			}
		}

		cout << ans << '\n';

	}
	return 0;
}

/*
2
3
3 0 0
0 3 0
0 0 3
5
2 1 2
1 4 0
2 0 3


//
1 2 2
1 3 1
3 0 2

+ 2

3 2 0
1 3 1
1 0 4

+ 1

3 2 0
2 3 0
0 0 5

+ 2

2 1 2
1 4 0
2 0 3

4 1 0
1 4 0
0 0 5




1 0 0

2 + 2 + 

2 0 2
0 5 0
3 0 3



5 - 1
5 - 4
5 - 3

4
1
2


*/