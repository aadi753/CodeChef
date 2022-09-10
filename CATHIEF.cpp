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
		long x, y;
		cin >> x >> y;

		long k, n;
		cin >> k >> n;

		long diff = abs(x - y);

		string ans = "No";

		if(diff % k == 0){
			if((diff / k) % 2 == 0){
				ans = "Yes";
			}
		}

		cout << ans << '\n';
	}
	return 0;
}

/*
1 - - - - 1
- - 1 1 - -
places police can go 
* - - * - - * - -
places thief can go
- / - - / - - / -
if there is any pos they can meet then they will meet

1 - - - - - 1
- 1 - - - 1 -
- - 1 - 1 - - 
- - - 1 - 1 -
- - - - 1 - 1
- - - - - 1 - **

1 - - - - 1
- 1 - - 1 -
- - 1 1 - -
- - - 1 1 -
- - - - 1 1
- - - - 1 1 
1 1 - - - - 


* * * * * * *
/ / / / / / /	

if lcm == 1
if lcm < n then ans = true
else ans = false

8 2 3 15
- 0 - - - - - 1 - - - - - - - 
- 0 - - 0 - - 0 - - 0 - - 0 -
- 1 - - 1 - - 1 - - 1 - - 1 -

start1 = x % k;
start2 = y % k;
5
0 1 1 1
1 4 1 5
4 2 1 7
3 7 2 10
8 2 3 15

0 0 
0 0
0 0
1 1
2 2

1 - - 0 -
- 1 - - 0
- - 1 0 -
- - 0 1 -
- 0 1 - -
0 1 - - -
1 0 - - - 
NO

- 0 - 1 - - -
0 - 1 - - - - 

*/