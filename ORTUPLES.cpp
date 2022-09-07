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
		long p, q, r;
		cin >> p >> q >> r;

		long ans = 0;

		for(long i = 0; i <= p; i++){
			for(long j = 0; j <= q; j++){
				if((i | j) == p){
					for(long k = 0; k <= r; k++){
						if(((j | k) == q) && ((k | i) == r)){
							ans++;
						}
					}
				}
			}
		}

		cout << ans << "\n";

	}
	return 0;
}


/*
a | b = p;
b | c = q;
c | a = r;

a = p | b;
a = r | c

b = p | a;
b = q | c;

10 12 14
0 5 5
0 0 7
*/