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

		int x, y;
		cin >> x >> y;

		float alice = (float) a / x;
		float bob = (float) b / y;

		string ans = "Equal";

		if(alice > bob){
			ans = "Alice";
		}
		else if(bob > alice){
			ans = "Bob";
		}

		cout << ans << "\n";

	}
	return 0;
}