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

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}


		int curr = 0;

		for(int i = 1; i < n; i++){
			if(arr[i] > arr[i - 1] && arr[i] > arr[0]){
				curr = i;
				break;
			}
		}
        
        if(n == 1){
            cout << arr[0] << '\n';
        }
		else if(curr > 0){
			
			cout << curr << '\n';
			for(int i = 0; i < curr; i++){
				cout << arr[i] << ' ';
			}
			cout << '\n';
			
			cout << n - curr << '\n';
			for(int i = curr; i < n; i++){
				cout << arr[i] << ' ';
			}
			cout << '\n';
		}
		else{
			cout << -1 << '\n';
		}

	}
	return 0;
}

/*
strictly increasing and then small OKAY put 

1 2 3 4 5 6 7 8 9 1

put last - 1 in 2 and all else in 1

1 2 3 4 3 2 1

all the elements in decreasing elements belong to 1st list 
whenever the element increase all of them are in list 2

if it never increases just return -1

5 4 3 2 1 
*/