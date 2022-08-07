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

		long long num;
		long long ans = 0;
		long curr_count = 0;
		long long prev = 0;

		for(long i = 0; i < n; i++){
			cin >> num;

			//count the number of strictly increasing elements
			//whenever a smaller no. occurs then add count * (count + 1) / 2 to ans 
            
			if(num < prev){
				//a smaller no. then the prev one occured
				//so calc the no. of subarrays uptil now
				if(curr_count > 0){
					ans += (curr_count * (curr_count + 1)) / 2;
				}

				//reset counter
				curr_count = 0;
			}
			
			//update for every no. encountered
			curr_count++;
			

			//if it is the last element
			if(i == (n - 1)){
				if(curr_count > 0){
					ans += (curr_count * (curr_count + 1)) / 2;
				}
			}

			//update the prev element as curr element
			prev = num;
		}

		//output the no. of subarrays for each case
		cout << ans << "\n";

	}
	return 0;
}