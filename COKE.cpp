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
		int n, m, k, l, r;
		cin >> n >> m >> k >> l >> r;

		int temp[n];
		long price[n];

		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			cin >> price[i];
			
			if(num < k){
				num += m;
				if(num > k){
					num = k;
				}
			}
			else if(num > k){
				num -= m;
				if(num < k){
					num = k;
				}
			}

			temp[i] = num;
		}

		//we want the price to be min and 
		//temp between l and r;
		//at max temp can reach k
		//at min temp can reach k

		//check which can is min btw the range

		int min = INT_MAX;
		int flag = 1;


		for(int i = 0; i < n; i++){

			if((temp[i] >= l) && (temp[i] <= r)){    
			    if(flag){
			        min = price[i];
			        flag = 0;
			    }
			    else if(price[i] < min){
					min = price[i];
				}
			}

		}

		if(flag){
			cout << -1 << '\n';
		}
		else{
			cout << min << '\n';
		}

	}
	return 0;
}