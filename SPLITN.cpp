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
		long n;
		cin >> n;

		//convert number to binary representation 
		//take a look at how many 1's it has string
		//1's - 1 = ans

		int ans = -1;

		while(n > 0){
			
			if(n % 2 != 0){
				ans++;
			}

			n = n / 2;
		}

		cout << ans << "\n";
	}
	return 0;
}