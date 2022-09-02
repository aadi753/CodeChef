#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

vector<long long> arr;
vector<long> powers;

void calc_powers(){
	long long num = 1;

	while(num < 10000000001){
		powers.push_back(num);
		num = num * 2;
	}
}

// void print_powers(){
//     for(int i = 0; i < powers.size(); i++){
//         cout << powers[i] << ' ';
//     }
//     cout << "\n";
// }

void precomute(){
	
	for(int i = 0; i < (powers.size() - 1); i++){
		for(int j = i + 1; j < powers.size(); j++){
			arr.push_back(powers[i] + powers[j]);
		}
	}
	
	sort(arr.begin(), arr.end());
	
}

// void print_precompute(){
//     for(int i = 0; i < 10; i++){
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
    
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	calc_powers();
	//print_powers();
	
	precomute();
	//print_precompute();
	
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		auto itr = lower_bound(arr.begin(), arr.end(), n);
		long long ans = (*itr - n);

		if(itr != arr.begin()){
			itr--;
			
			if((n - *itr) < ans){
				ans = (n - *itr);
			}
		}
		
		cout << ans << "\n";


		//find lower bound and upper bound of the number
		//lower_bound => 
		//int x = itr - arr.begin();
		//long more = arr[x];

		// long long greater = *itr;

		

// 		auto it = upper_bound(arr.begin(), arr.end(), n);
// // 		int y = it - arr.begin();
// // 		long more = arr[y];
//         long long smaller = *it;
		
		
		// long diff1 = n - smaller;
		// long diff2 = greater - n;

		// long ans = diff1;

		// if(diff2 < diff1){
		// 	ans = diff2;
		// }
		
	}

	return 0;
}

/*

2 ^ n + 2 ^ m = x;
n + m = log x;
2^n (1 + 2^(m - n)) = x;


1 2 4 8 16 32 64 
1 2 3 4 5 6 7* 8 9 10 11* 12 13* 14* 15* 16 17 18 19* 20 24
*/