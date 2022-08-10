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
		int h, m;
		cin >> h >> m;

		//check how many numbers in range 0 - 9 can be fitted inside h and m

		int h1 = 0, m1 = 0;

		for(int i = 0; i < 10; i++){
			if(h > i){
				h1++;
			}

			if(m > i){
				m1++;
			}
		}

		//check how many in sequence 11...99 can fit inside h and m

		int h2 = 0, m2 = 0;

		for(int i = 11; i < 100; i += 11){
			if(h > i){
				h2++;
			}

			if(m > i){
				m2++;
			}
		}

		int ans = min(h1, m1) + min((h1 - 1), m2) + min(h2, (m1 - 1)) + min(h2, m2);

		cout << ans << "\n";
	}
	return 0;
}