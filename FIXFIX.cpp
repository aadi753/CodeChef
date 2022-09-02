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
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long k;
		cin >> k;

		if(k == (n - 1)){
			cout << -1 << "\n";
		}
		else{
			
			long i = 1;

			while(i <= k){
				cout << i << ' ';
				i++;
			}
            
            if(i < n){
                cout << n << ' ';
            }
			

			while(i < n){
				cout << i << ' ';
				i++;
			}
			// for(; i < k; i++){
			// 	cout << i + 1 << ' ';
			// }

			// for(long j = n; j > i; j--){
			// 	cout << j << ' ';
			// }

			cout << "\n";
		}

	}
	return 0;
}

/*

not posible when k = n - 1
1 2 3 4 5 
5 4 3 2 1

5 4 3 2 1
1 5 4 3 2
1 2 5 4 3
1 2 3 5 4
-1
1 2 3 4 5

*/