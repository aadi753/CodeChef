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

		//max element can occur at max 1 time

		int arr[n];
		int count = 0;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == n){
				count++;
			}
		}

		string ans = "Second";

		if(count < 2){
			sort(arr, arr + n);

			long long diff = 0;

			for(int i = 0; i < n; i++){
				// diff += (i - arr[i] + 1);

				if(arr[i] <= (i + 1)){
					diff += (i - arr[i] + 1);
				}
				else{
					//second wins 
					
					diff = -1;
					break;
				}
			}
			//cout << diff << '\n';

			if((diff > 0) && (diff % 2)){
				ans = "First";
			}
		}

		//already in order and we can't do anything
		//we can only increase the values 

		
		cout << ans << '\n';
	}
	return 0;
}

/*

1 2 3 4 5 7 7 8
//-ve 
//if arr[i] > i break
*/