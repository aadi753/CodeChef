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

		long k;
		cin >> k;

		long arr[n];

		for(long i = 0; i < n; i++){
			cin >> arr[i];
		}

		//find the first missing number and then after that fill that number if k > 0 and keep filling 
		//return the ans when missing value is encountered and k == 0

		sort(arr, arr + n);

		long num = 0;
		long i = 0;


		//go through each number and fill the missing ones and return the one that can't be filled
		while(num <= arr[n - 1] || k > 0){	
			
			if(num == arr[i]){
				//well there are duplicates in the data
				while((i < (n - 1)) && num == arr[i]){
					i++;					
				}
				num++;
			}
			else if(k > 0){
				num++;
				k--;
			}
			else{
				break;
			}
		}

		cout << num << endl;
	}
	return 0;
}