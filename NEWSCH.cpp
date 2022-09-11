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

		//4 3 4 3 4 3 4 2
		//we have 4 choises on odd days 
		//and 3 choises on even days 
		//we have 3 choises / 2 choises on the last day

		//ans = 3 ^ n + (-1) ^ n;


		long mod = 1000000007;
        int one = -1;

		long long ans = 1;

		for(int i = 0; i < n; i++){
			ans = (ans * 3) % mod;
			one *= -1; 
		}

		ans += (one * 3);



        // for(int i = 0; i < fours; i++){
        // 	ans = (ans * 4) % mod;
        // }

        // for(int i = 0; i < threes; i++){
        // 	ans = (ans * 3) % mod;
        // }
        
		// long long x = pow(4, fours) % mod;
		// long long y = pow(3, threes) % mod;
	
        //n = 5
        //n = 4 x = 2 * 4 = 8 y = 2 * 3 = 6 ans = 8 * 6 
        //2 * 2

  //       cout << n << ' ' << ans << '\n';

		// if(n % 2){
		// 	ans = ans * 3;
		// }
		// else{
		// 	ans = ans * 2;
		// }


		cout << ans << '\n';
	}
	return 0;
}

/*
2 

4 3 2
*/