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
		int x, y, a, b;

		cin >> x >> y >> a >> b;


		if((x + y) > (a + b)){
			cout << a + b << "\n";
		}
		else{
			cout << (x + y) << "\n";
		}

	}
	return 0;
}