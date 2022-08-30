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
		long long n;
		cin >> n;

		long long m;
		cin >> m;

		//one of the terms will be (total_sum + m) / 2
		long long sum = (n * (n + 1)) / 2;

		long long total_sum = sum + m;

		string ans = "No";

		if(total_sum % 2 == 0){
			long long x = total_sum / 2;
			long long y = sum - x;

			if(__gcd(x, y) == 1){
				ans = "Yes";
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}

/*

1 1 
0 1 
2 / 2 = 1

5 7 
1 2 3 4 5

diff = 7

y - x = 7
y = 7 + x

15
8 = 1 + 5 + 2 
7 = 4 + 3

total sum = (n * (n + 1)) / 2;
diff = m

0 and sum
2 13

15 7
y = m + x
x = 0 => y = 7
x = 1 => y = 8
x = 2 => y = 9
x = 3 => y = 10
x = 4 => y = 11
x = 5 => y = 12
x = 6 => y = 13
x = 7 => y = 14
x = 8 => y = 15


ans = 4, 11
sum of set1 = x;
sum of set2 = y;

y + x = total_sum
y - x = m
z = (total_sum + m) / 2
15 + 7 = (22 / 2)

5 8 
x = 0 y = 8
x = 1 y = 9
x = 2 y = 10
x = 3 y = 11 => 14
x = 4 y = 12 => 16

15 + 8 = 23 / 2

for(int i = 0; i <= sum / 2; i++){
	if(gcd(i, sum - i) == 1){
		ans = "YES";
		break;
	}
}

1 2 
if diff > n * (n + 1) / 2
	ans = NO

*/