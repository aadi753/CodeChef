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
		float price ;
		cin >> price;

		int calls;
		cin >> calls;

		int n;
		cin >> n;

		int validity;
		float rate;
		int cost;
		float cost_per_month;
		float max = ((float) calls) * price;
		int ans = 0; 
		float total_cost;

		for(int i = 0; i < n; i++){
			cin >> validity;
			cin >> rate;
			cin >> cost;

			cost_per_month = cost / (float) validity;

			total_cost = cost_per_month + (rate * ((float) calls));
                
			if(total_cost < max){
				max = total_cost;
				ans = i + 1;
			}
		}
    
        //cout << max << "\n";
		cout << ans << "\n";

	}
	return 0;
}

/*
4
1.00 200 1
1 0.50 28

200 * 1.00 = 200.00
28 + 100.00 = 128.00 **


1.00 200 2
1 0.75 40
3 0.60 100

200.00
40 + 200 * 0.75 = 190
33.33 + 0.6 * 200 = 153.33 **

1.00 50 2
1 0.75 40
3 0.60 100

50.00 **
40 + 50 * 0.75 = 77.5
33.33 + 50.00 * 0.60 = 63.33

1.00 100 2
3 0.50 10
2 0.10 20

100.00
3.33 + 50 = 53.33
10 + 10 = 20 **
*/