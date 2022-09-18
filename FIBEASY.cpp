#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long fibo[60];

void precomute(){
	fibo[0] = 0;
	fibo[1] = 1;

	for(long i = 2; i < 60; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for(int i = 2; i < 60; i++){
		fibo[i] = fibo[i] % 10;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	precomute();

	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		//we need to identify the MSB of n 
    
		int msb = 0;

		while(n > 0){
			msb++;
			n /= 2;
		}
		//9 4 2 1 0
		msb--;
		
		//cout << msb << ' ';


		//fibonacci series is periodic
		//whenever a mod of it is taken with n = 2 => 3
		//and n => 6n
		//so we need to take mod 60

		//we need to find the number at 2^x i.e. the index => 2^x - 1

		int index = ((long long) pow(2, msb) - 1) % 60;
        //cout << index << ' ';
		cout << fibo[index] << '\n';

	}
	return 0;
}

/*biggest 2^x is the ans  
the digit at the 2^X place is the ans
0 1 1 
0 1 1

1
msb = 1

else{
	ans = arr[2^x];
}
10
5
2
1
0
1010

0 1 2 3 0 9

0 *
1 * 
1 
2 *
3
5
8
3 *
1
4
5
9
4
3
7
0 *
7
7
4
1
5
6
1
7
8
5
3
8
1
9
0
9 * 
9
8
7
5
2
7
9
6
5
1


64 - 1 6 
*/