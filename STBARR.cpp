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

		int num;
		int max = 0;
		int ans = 0;
        int last_max_pos = 0;
        int first;

		for(int i = 0; i < n; i++){
			cin >> num;
			
			if(i){
				if(num != first){
					ans = 1;
				}
			}
			else{
				first = num;
			}

			if(num >= max){
				max = num;
				last_max_pos = i;
			}

		}
		

		//ans = n - (last_max_pos + 1);
		
		if(ans){
			if(last_max_pos != n - 1){
				ans = 2;
			}
		}

		cout << ans << "\n";

		//find the most frequent element 9 -> 4 4 4 4 4 4 4 9

		//find max and whatever elements are not equal to it ans
		//if max at last element then okay else we need to add 1 more to ans;
		//1 12 1 1 1 1 
	}
	return 0;
}