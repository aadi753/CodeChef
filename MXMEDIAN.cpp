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

		int size = 2 * n;

		int arr[size];
		for(int i = 0; i < size; i++){
			cin >> arr[i];
		}

		sort(arr, arr + size);

		//select the median of last n elements 
		//that is n + (n / 2) element

		cout << arr[n + (n / 2)] << '\n';

		for(int i = 0; i < n; i++){
			cout << arr[i] << ' ' << arr[size - i - 1] << ' ';	
		}

		cout << '\n';
	}
	return 0;
}

/*
3
1
1 2
3
1 2 3 4 5 6
1 2 2 3 3 3

1 2 3 4 5
1 5 2 4 3

1 3 2 3 2 3

*/