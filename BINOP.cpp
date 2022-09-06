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
		string a;
		cin >> a;

		string b;
		cin >> b;

	
		long ones = 0, zeros = 0;
		//flag = 0 = doesn't exist
		int zero_flag = 0;
		int one_flag = 0;

		for(int i = 0; i < a.size(); i++){
			if(a[i] == '0'){
				zero_flag = 1;
				if(a[i] != b[i]){
					zeros++;
				}
			}
			else{
				one_flag = 1;
				if(a[i] != b[i]){
					ones++;
				}
			}
		}

		string res = "Lucky Chef";
		long ans = 0;

		if((zeros || ones) && (!zero_flag || !one_flag)){
			res = "Unlucky Chef";
		}
		else{
			ans = min(zeros, ones);
			ans += (max(zeros, ones) - min(zeros, ones));
		}

		cout << res << "\n";

		if(res == "Lucky Chef"){
			cout << ans << "\n";
		}
	}
	return 0;
}

/*

0 to 1 -> 
	0 ^ 1 = 1
	1 remains 1
	0 becomes 1

	0 | 1 = 1
	1 remains 1
	0 becomes 1

1 to 0 ->
	0 & 1 = 0
	1 becomes 0
	0 remains 0

	1 ^ 1 = 0
	1 becomes 0

	first convert all the zeros to 1


	111 
	010


*/


/*




AND
 0 0 0
 0 1 0
 1 0 0
 1 1 1

OR
 0 0 0
 0 1 1
 1 0 1
 1 1 1

XOR
 0 0 0
 0 1 1
 1 0 1
 1 1 0

0011
1100

1 0 1 0
1 1 0 0

1 1 0 0
1 1 0 0

1 1 1 0 0
0 0 0 1 1 



0 => 1
	| 0 1 = 1
	0 1 = 1
	1 1 = 1

	^ 0 1 = 1
	1 0 = 1
	1 1 = 0

1 => 0
	& 1 0 = 0
	0 0 = 0
	1 0 = 0

	^ 1 0 = 1
	1 1 = 0
	0 1 = 1

	we can either switch the bits or make them same

*/