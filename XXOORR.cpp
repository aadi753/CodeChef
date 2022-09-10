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

		int k;
		cin >> k;
		
		int arr[33] = {};

		long num;
		for(int i = 0; i < n; i++){
			cin >> num;
			//convert the num to binary and add to that bit

			for(int j = 0; j < 33; j++){
				if(num == 0){
					break;
				}

				if(num % 2){
					arr[j]++;
				}

				num /= 2;
			}
		}

		long ans = 0;

		for(int i = 0; i < 33; i++){
		    //cout << arr[i];
		    if(arr[i]){
		        ans += ceil((float) arr[i] / k);
		    }
		}
		//cout << '\n';

		cout << ans << '\n';
	}
	return 0;
}

/*
0011
0110
1010

00000000001
00000000010


1
2

0 - 1
1 - 3
2 - 1
3 - 1

010

011 => 0001 
110 => 0100
	=> 1010
0 - 1
1 - 1
2 - 1
3 - 1

at most 32 bits

*/