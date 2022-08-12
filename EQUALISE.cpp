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
		int a, b;
		cin >> a >> b;

		int max = a;
		int min = b;

		if(a < b){
			max = b;
			min = a;
		}

		string ans = "NO";

		if(a == b){
			ans = "YES";
		}
		else{
			while(max % 2 == 0){
				
				max = max / 2;

				if(max == min){
					ans = "YES";
					break;
				}
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}