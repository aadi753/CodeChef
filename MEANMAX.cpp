#include<iostream>
#include <bits/stdc++.h>
#include<iomanip>

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
		long long total = 0;
		int max = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num > max){
				max = num;
			}

			total += num;
		}

		float ans = (float) (total - max) / (float) (n - 1);
		ans += (float) max;

		cout << fixed << setprecision(6) << ans << "\n";
		//find the max and put it aside 
		//take mean of everything else

	}
	return 0;
}

/*
1 2 3 4 5 6 
1 + ((2 + 3 + 4 + 5 + 6) / 5) = 1 + 4 = 5
(1 + 2 / 2) + (3 + 4 + 5 + 6 / 4) = 1.5 + 18/4 => 4.5+1.5 => 6
((1 + 2 + 3) / 3) + ((4 + 5 + 6) / 3) => 2 + 5 => 7
(1 + 6 + 2) / 3 + (4 + 3 + 5) / 3 => 3 + 4 => 7
if number = even then ans = sum of all / (num / 2)

6 + (5 + 4 + 3 + 2 + 1) / 5 => 6 + 15 / 5 => 6 + 3 => 9
(6 + 5) / 2 + (4 + 3 + 2 + 1) / 4 => 11/2 + 10/4 => 5.5 + 2.5 => 8


6 + 6 + 5
6 6 5
6 + 5 => 11
6 + (6 + 5) / 2 => 5.5 + 6 => 11.5

1 1 1 1 1 20
(1 + 1 + 1 + 1 + 1 + 20) / 3
25 / 3 => 
*/