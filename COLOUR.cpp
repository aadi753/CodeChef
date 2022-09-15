#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t;
	cin >> t;
	while(t--){
		long arr[3];
        long ans = 0;
        
       
        
		for(long i = 0; i < 3; i++){
			cin >> arr[i];
			if(arr[i] > 0){
			    arr[i]--;
			    ans++;
			}
		}
		
		sort(arr, arr + 3);
	

// 		//we have single colours
// 		for(int i = 0; i < 3; i++){
// 			if(arr[i]){
// 				arr[i]--;
// 				ans++;
// 			}
// 		}

        // for(int i = 0; i < 3; i++){
        //     cout << arr[i] << ' '; 
        // }
        // cout << '\n';

		for(long i = 2; i > 0; i--){
			for(long j = i - 1; j >= 0; j--){

				if(arr[i] > 0 && arr[j] > 0){
					ans++;
					arr[i]--;
					arr[j]--;
				}

			}
		}



		cout << ans << '\n';
	}
	return 0;
}

/*
3 3 3
1 2 
1 3 
2 3 

1
2
3

max = 6

*/