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
	int n;

	while(t--){
		cin >> n;

		long long sum = 0;
		long num;
		
		int even1 = 0;
		int even2 = 0;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num % 2 == 0){
				even1++;
			}

			sum += num;
		}

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num % 2 == 0){
				even2++;
			}

			sum += num;
		}

// 		if(even1 > even2){
// 			sum -= (even1 - even2);
// 		}
// 		else if(even2 > even1){
// 			sum -= (even2 - even1);
// 		}

        sum -= abs(even1 - even2);

		cout << (sum / 2) << "\n";
	}
	return 0;
}
