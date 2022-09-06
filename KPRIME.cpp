#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;
long arr[100001] = {};

void precompute(){
	arr[0] = 0;
	arr[1] = 0;
	for(int i = 2; i < 100001; i++){
		if(!arr[i]){
		    arr[i] = 1;
			for(int j = i * 2; j < 100001; j += i){
				arr[j]++;
			}
		}
	}
}

// void print_precompute(){
// 	for(int i = 0; i < 50; i++){
// 		cout << arr[i] << ' ';
// 	}
// 	cout << "\n";
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	precompute();
	//print_precompute();

	int t;
	int a, b;
	int k;
	
	cin >> t;
	while(t--){
		
		cin >> a >> b;
        
        cin >> k;
        
		int ans = 0;
		
		for(int i = a; i <= b; i++){
		    if(arr[i] == k){
		        ans++;
		    }
		}
        
        cout << ans << "\n";
	}
	return 0;
}