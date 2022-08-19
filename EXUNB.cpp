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

		string ans = "YES";

		if(n % 2 == 0){
			ans = "NO";
		}

		cout << ans << "\n";

		if(n % 2){
			for(int i = 0; i < n; i++){
				//if even row first one will be 0 else first one will be 1
				if(i % 2){
					num = 0;
				}
				else{
					num = 1;
				}
				
				for(int j = 0; j < n; j++){
						
					//don't play with yourself
					if(i == j){
						cout << 0;
					}
					else{
						cout << num;
						if(num == 0){
							num = 1;
						}
						else{
							num = 0;
						}
					}

				}
				
				cout << "\n";
			}
		}

	}
	return 0;
}

/*
0101
0011
1001
0110

//if even then -1
//because we need (n - 1) / 2 wins each time
//and odd is not divisible by 2

01010
00101
10010
01001
10100

0101010
0010101
1001010
0100101
1010010
0101001
1010100

0101010
0010101
1001010
0100101
1010010
0101001
1010100
*/