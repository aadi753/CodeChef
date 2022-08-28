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

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		//put the first number 
		//keep going till the sequence is not broken 
		//while arr[i] = arr[i + 1] - 1;
		//i++
		//else cout << arr[i] << ','

		int counting = 0;
		int prev = -1;

		for(int i = 0; i < n; i++){

			if(counting){
				//we are currently counting a series
				if(arr[i] == arr[i - 1] + 1){
					prev = arr[i];
				}
				else{
					cout << prev << ',';
					counting = 0;
				}
			}
			
			if(!counting){
				if((i < (n - 2)) && (arr[i + 2] == arr[i] + 2)){
					//start counting
					cout << arr[i] << "...";
					counting = 1;
					prev = arr[i];
				}
				else{
					//no series can start from here
					cout << arr[i];

					if(i != (n - 1)){
						cout << ",";
					}
				}
			}
		}

		if(counting){
			cout << arr[n - 1];
		}
    
        cout << "\n";
    
	}
	return 0;
}