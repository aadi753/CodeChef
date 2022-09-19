#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--){
	    
		long n;
		cin >> n;
		
		//cout << n << '\n'; 

		long ans = n;

		long curr = n;
		int count = 0;

		for(int i = 1; i <= 1001; i++){
			curr = (n + i);
			count = 0;
			//cout << curr << '\n';

			while(curr > 0){
				if(curr % 10 == 3){
					count++;
				}
				curr /= 10;
			}

			if(count >= 3){
			    //cout << n + i << '\n';
				ans = n + i;
				break;
			}
		}

		cout << ans << '\n';
	}
	return 0;
}