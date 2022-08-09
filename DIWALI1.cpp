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
		long P, a, b, c, x, y;
		cin >> P >> a >> b >> c >> x >> y;

		//check what is cheaper buying (1 anar + x ful) or (1 chakri + y ful)
		//what ever is cheaper go with it 
		//divide the money by the min

		long long anar = b + (x * a);
		long long chakri = c + (y * a);

		long long min = anar;

		if(anar > chakri){
			min = chakri;
		}

		long long ans = P / min;

		cout << ans << "\n";


	}
	return 0;
}