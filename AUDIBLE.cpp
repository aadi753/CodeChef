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

		if(n >= 67 && n <= 45000){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
        
        cout << "\n";
	}
	return 0;
}