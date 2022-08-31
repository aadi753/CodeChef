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
		
		int city[n], big[n];

		for(int i = 0; i < n; i++){
			cin >> city[i];
		}

		long long total = 0;

		for(int i = 0; i< n; i++){
			cin >> big[i];
			total += big[i];
		}

		long long max = total;

		for(int i = 0; i < n; i++){
			total = total - big[i] + city[i];
			
			//2 + 3 + 1 + 3 = 9
			//7 + 7 = 14
            //4 + 
			if(total > max){
				max = total;
			}
		}

		cout << max << "\n";

	}
	return 0;
}