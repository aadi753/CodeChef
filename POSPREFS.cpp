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

		int arr[n] = {};


		//make all even numbers +ve first (2 to n)
		//if k > 0 
		//start from the last odd number if n = odd then n else n - 1 (till 3)

	

		if(k > 0){
			arr[0] = 1;
			k--;
		}

		int i = 1;
		int even = 1;

		while(k > 0){
			
			//even
			if(even){
				if(i < n){
					arr[i] = 1;
					i += 2; 
				}
				else{
					even = 0;
					//set i to last odd number
					//if n % 2 == 0
					//i = n - 2;
					//else
					//i = i - 1

					if(n % 2 == 0){
						i = n - 2;
					}
					else{
						i = n - 1;
					}
				}
			}

			if(!even){
				if(i > 1){
					arr[i] = 1;
					i -= 2;
				}
			}

			k--;
		}



		//print
		for(int i = 0; i < n; i++){
			if(arr[i]){
				cout << (i + 1) << ' ';
			}
			else{
				cout << -(i + 1) << ' ';
			}
		}

		cout << "\n";
	}
	return 0;
}