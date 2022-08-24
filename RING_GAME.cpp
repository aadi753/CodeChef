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
	long n;
	cin >> t;
	while(t--){
		
		cin >> n;

		int num;
		long ones = 0, zeros = 0;
		int arr[n];

		long long curr = 0, max = 0;

		for(int i = 0; i < n; i++){
			cin >> num;

			arr[i] = num;

			if(num){
				ones++;
			}
			else{
				zeros++;
			}

			if(i > 0){
				if(num != arr[i - 1]){
					curr++;
				}

				if(i == (n - 1)){
					if(arr[0] != num){
						curr++;
					}
				}
			}
		}

		//max = min * 2

		long min = ones;

		if(zeros < ones){
			min = zeros;
		}

		max = min * 2;

		//count the curr pairs 

		//if curr >= max
		//bob wins
		//else 

		//if (diff / 2) % 2 == 0 
		//bob
		//else 
		//alice
		
		long long diff;

		diff = max - curr;

		string ans = "Bob";
		if((diff / 2) % 2){
			ans = "Alice";
		}

		cout << ans << '\n';
	}
	return 0;
}

/*
3
3
2 - 1 0 1
1 1 0

4
2 - 1 1 0 0
4 - 1 0 1 0 

5
4 - 1 0 1 0 1
4 - 0 1 0 1 0
1 1 1 0 0
1 0 0 1 1 

1 1 1 1 1 0 
max = 2
curr = 2
bob wins
(min + 1)

1 1 1 0
max = 2
curr = 2
 
1 1 1 1 0
max = 2
curr = 2

1 1 1 1 1 

min == 0
max = 0

curr = 0;

if(max < curr){
	ans = bob
}

8
4 - 1 0 1 0 0 0 1 1
6 - 1 0 1 0 1 0 0 1
8 - 1 0 1 0 1 0 1 0

max = 8
curr = 2
diff = 6

3

alice => 6

bob => 8

max = min * 2

1 0 1 0 1 0 1 0 1 

1 0 1 0 1 

count current pairs
and max pairs = n (if even)
else max = n - 1

diff = max - curr

end result will be 
1 0 1 
or 
0 1 0
form 
*/