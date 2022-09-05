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
		long long x, n;
		cin >> x >> n;

		//distance of x from 1 * dist from 2n
		long long ans = (x - 1) * (2 * n - x);

		cout << ans << '\n';
	}
	return 0;
}

/*
1 = heads;
0 = tails;

1
0

10
01
11
00

000
111
110
101
001
011
010
100


--1--
-1---
1----
---1-
----1

- 1
1 -

- - 1
- - 1
- 1 -
2 moves

1 - -
- - 1

- - 1
- 1 -
*/