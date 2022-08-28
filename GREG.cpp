#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	long max = n + m + 1;
	int primes[max] = {};
	vector<int> list_of_primes;

	primes[0] = 1;
	primes[1] = 1;

	for(int i = 2; i < max; i++){
		
		if(primes[i] == 0){
			for(int j = i * 2; j < max; j = j + i){
				primes[j] = 1;
			}

			list_of_primes.push_back(i);
		}

	}

	//n rows, m columns 

	//select all prime numbers upto (n + m)

	//traverse the list_of_primes till 

	// int size = list_of_primes.size();

	auto itr = upper_bound(list_of_primes.begin(), list_of_primes.end(), (n + m));

	int ans = itr - list_of_primes.begin();

	cout << ans << "\n";

	return 0;
}

// #include<iostream>
// #include <bits/stdc++.h>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// int primes[10000001] = {};
// std::vector<int> list_of_primes;

// void precompute_primes(){
// 	primes[0] = 1;
// 	primes[1] = 1;

// 	for(int i = 2; i < 10000001; i++){
		
// 		if(primes[i] == 0){
// 			for(int j = i * 2; j < 10000001; j = j + i){
// 				primes[j] = 1;
// 			}

// 			list_of_primes.push_back(i);
// 		}

// 	}
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
	
// 	precompute_primes();

// 	int n, m;
// 	cin >> n >> m;

// 	//n rows, m columns 

// 	//select all prime numbers upto (n + m)

// 	//traverse the list_of_primes till 

// 	// int size = list_of_primes.size();

// 	auto itr = upper_bound(list_of_primes.begin(), list_of_primes.end(), (n + m));

// 	int ans = itr - list_of_primes.begin();

// 	cout << ans << "\n";

// 	return 0;
// }

/*

4 4 

2 3 4 5
3 4 5 6
4 5 6 7
5 6 7 8

//2 3 5 7 


3 4

2 3 4 5
3 4 5 6
4 5 6 7

//select all the prime numbers
2 3 5 7

*/