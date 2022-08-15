#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	long k;
	cin >> k;

	long arr[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	if(k == 0){
		k = 0;
	}
	else if(k % 2 == 0){
		k = 2;
	}
	else{
		k = 1;
	}

    long max;
	for(int i = 0; i < k; i++){
		//find max element
		max = arr[0];
		
		for(int j = 1; j < n; j++){
			if(arr[j] > max){
				max = arr[j];
			}
		}

		//subtract each element from max

		for(int j = 0; j < n; j++){
			arr[j] = max - arr[j];
		}
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}

	cout << "\n";

	
	return 0;
}