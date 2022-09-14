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

		long num;
		int odd = 0, twos = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num % 2){
				odd++;
			}
			else{
				if(num == 2){
					twos++;
				}
			}
		}

		int ans = 0;

		if(odd % 2){
			//number of odd numbers are odd 
			//then convert one two into odd
			if(twos){
				ans = 1;
			}
			else{
				ans = -1;
			}
		}

		cout << ans << '\n';
	}
	return 0;
}

/*
1 => 1 / 2 = 1 - 1 = 1^0 = 1
2 => 2 / 2 - 1 = 2^0 = 1
3 => 3 / 2 - 1 = 3^1 = 3

4 => 4/2 = 2-1 = 1 = 4^1 = 4

5 => 5 / 2 => 3 - 1 => 5^2 = 25

6 => 6 / 2 => 6^2 = 36

7 => 7 / 2 => 4 - 1 = 3 => 7 ^ 3 => 49 * 7 => 343

8 => 8 ^ 3 = 512

9 => 9^4 => 6561


4,6,8 even numbers are useless leave them alone 
odd numbers can not be converted into even numbers 
2 can be converted into odd number 
*/