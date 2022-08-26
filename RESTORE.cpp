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

		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			cout << (n - num + 1) << ' ';
		}

		cout << "\n";

	}
	return 0;
}

/*
2
5
5 2 3 4 5
4
4 4 4 4

1 4 3 2 1

n - num + 1


*/