#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int primes[10001] = {};

void fill_primes(){
	primes[0] = 1;
	primes[1] = 1;

	for(int i = 2; i < 10001; i++){
		if(!primes[i]){
			for(int j = i * 2; j < 10001; j += i){
			    if(!primes[j]){
			        primes[j] = 1;
			    }
			} 
		}
	}
}

//create a array of prime numbers
//iterate through the array using two for loops and then create a array of 10000
//count the pairs that form the given number

std::vector<int> pr;

void create_only_primes(){
	for(int i = 2; i < 10001; i++){
		if(!primes[i]){
			pr.push_back(i);
		}
	}
}

long arr[10001] = {};

void calculate(){

	int N = pr.size();
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int x = pr[i] + (2 * pr[j]);

			if(x > 10000){
				break;
			}
			arr[x]++;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fill_primes();
	create_only_primes();
	calculate();
	int t;
	cin >> t;
	int n;
	
	while(t--){
		cin >> n;
		long ans = arr[n];
		
		// for(int i = 2; i <= n - 4; i++){
		// 	if(!primes[i]){
		// 		if((n - i) % 2 == 0){
		// 			if(!primes[((n - i) / 2)]){
		// 				ans++;
		// 			}
		// 		}
		// 	}
		// }

		cout << ans << "\n";
	}
	return 0;
}