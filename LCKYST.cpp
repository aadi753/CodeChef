#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;

	long long num, temp;
	for(int i = 0; i < n; i++){
		cin >> num;
		//to have trailing zeros the number must have 5 and 2 as divisors 
		//we can get 2 by multiplying number with 4
		//so it must already have 5 as a multiple 
		// 5 * 5 * 2 = 50
		// 5 * 5 * 5 * 2  * 2= 250 
		//max trailing zeros = how many 5's can divide the number
		//7 49 
		//15 = 3 * 5 * 7 * 2 * 2
		//3 4 5 
		//5 * 5 * 2 * 2 = 100
		//10 = 5 * 2 * 2 * 2 = 40 

		int count5 = 0;
		int count2 = 0;
		
		temp = num;

		while(temp % 5 == 0){
			count5++;
			temp /= 5;
		}

		temp = num;
		while(temp % 2 == 0){
			count2++;
			temp /= 2;
		}

		//multiply count5 - count2 4's to the number 
		while(count5 > count2){
			num *= 4;
			count5 -= 2;
		}

		cout << num << '\n';

	}
	return 0;
}