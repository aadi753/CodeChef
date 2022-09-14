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

		int max;	
		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(i == 0 || arr[i] > max){
				max = arr[i];
			}
		}

		int count = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] == max){
				count++;
			}
		}


		long long ans = 1;
		long mod = 1000000007;

		for(int i = 0; i < count; i++){
			ans = (ans * 2) % mod;
		}

		ans--;

		cout << ans << '\n';
	}
	return 0;
}

/*
2 2 2 2

2 2 2 2 

4
3
2
1
1
1
1
1
1 = don't remove anything 

-1 because we cannot remove everything
C0 + C1 + C2 + ... + Cn-1
//we can't remove everything so Cn is not counted so -1

//sum = 2^n - 1
*/