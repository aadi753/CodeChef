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

		int m;
		cin >> m;

		//if both are odd - impossible
		if((n % 2) && (m % 2) || n == 1 || m == 1){
			cout << -1;
		}
		else{
			//put the odd ones in middle 
			//and then put the odd ones on the corner 

			//total len = n + m
			//even + even = even 
			//even + odd = odd

			//print alternating chars 
			//in the first half have n / 2 chars 
			//and m / 2 chars
			
			int i, j;
			
			//S1
			i = 0;
			while(i < (n / 2)){
				cout << 'a';
				i++;
			}

			j = 0;
			while(j < (m / 2)){
				cout << 'b';
				j++;
			}

			if(n % 2){
				cout << 'a';
			}
			else if(m % 2){
				cout << 'b';
			}

			j = 0;
			while(j < (m / 2)){
				cout << 'b';
				j++;
			}

			i = 0;

			while(i < (n / 2)){
				cout << 'a';
				i++;
			}

			cout << "\n";


			//S2
			j = 0;
			while(j < (m / 2)){
				cout << 'b';
				j++;
			}

			i = 0;
			while(i < (n / 2)){
				cout << 'a';
				i++;
			}

			if(n % 2){
				cout << 'a';
			}
			else if(m % 2){
				cout << 'b';
			}

			
		    i = 0;
			while(i < (n / 2)){
				cout << 'a';
				i++;
			}

			j = 0;
			while(j < (m / 2)){
				cout << 'b';
				j++;
			}
		}

		cout << "\n";

	}
	return 0;
}