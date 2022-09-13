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

	long ans = 0;
	long total = 0;

	//int arr[n];

	int num;
	for(int i = 0; i < n; i++){	
		cin >> num;
	//	arr[i] = num;
		total += num;
	}

	ans = ceil(total / 2.0);
    if(n > ans){
        ans = n;
    }
	// int done = 0;
	// int free = 0;

	// //1 2 3 3 
	// //0 1 2 2 => 2
	// //0 0 1 1 => 4
	// //0 0 0 0 => 5


	// while(!done){
	// 	done = 1;
		
	// 	for(int i = 0; i < n; i++){
			
	// 		if(arr[i]){
	// 			done = 0;
				
	// 			if(!free){
	// 				ans++;
	// 				free++;
	// 			}
	// 			else{
	// 				free--;
	// 			}

	// 			arr[i]--;
	// 		}

	// 	}

	// }

	cout << ans << "\n";


	return 0;
}

/*
we need at least n tickits and then we have n more free tickets

1
2
3

0
1
2

0
0
1

1

*/