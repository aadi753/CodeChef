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

		int k;
		cin >> k;

		int arr[n];
		int max = 0;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			
			if(i == 0){
				max = arr[i];
			}

			if(arr[i] > max){
				max = arr[i];
			}
		}
    
		long long ans = 0;

		for(int i = 0; i < n; i++){
			if(arr[i] == max){
				//check if there are atleast (k - 1) elements before it or not

				if(i >= (k - 1)){
					ans += (n - i);
				}
			}
		}

		cout << ans << "\n";

	}
	return 0;
}

/*
5 3

1 2 3 4 5 1 2 3 5 5 1 2 5

9 + 5 + 4 + 1
19

*/