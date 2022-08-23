#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;
long mod = 1000000007;
long series[1000002];

void fill_series(){
	series[0] = 1;
	series[1] = 1;

	for(int i = 2; i < 1000002; i++){
		series[i] = ((series[i - 1] + series[i - 2]) % mod); 
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fill_series();
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		
		int guess;
		cin >> guess;

		long res = series[n];
        //cout << res << ' ';
		//count the number of 1's in binary form of numbers;
		int count = 0;

		while(res > 0){
			if(res % 2){
				count++;
			}

			res /= 2;
		}
        
        //cout << count << "\n";
        
		string ans = "INCORRECT";
		if(guess == count){
			ans = "CORRECT";
		}

		cout << ans << "\n";
	}
	return 0;
}

/*
1
1

2 
1 1
2

2

3
1 1 1
1 2
2 1

3

4 
1 1 1 1
1 1 2
2 1 1
1 2 1
2 2

5 

5 
1 2 2 
2 1 2
2 2 1

1 1 1 2
1 2 1 1
1 1 2 1
2 1 1 1


1 1 1 1 1

8


6
2 2 2

1 1 2 2 
1 2 1 2
1 2 2 1
2 2 1 1 
2 1 2 1
2 1 1 2

1 1 1 1 2 (5) 
1 1 1 1 1 1 

7
1 2 2 2 => 4 

2 * 2

1 1 1 2 2

1 1 2 1 2

1 2 1 1 2

1 2 2 1 1

2 2 1 1 1 

2 1 2 1 1

2 1 1 2 1

2 1 1 1 2          



1 1 1 1 1 2

1 1 1 1 1 1 1

8 
2 2 2 2
1 1 2 2 2
1 1 1 1 2 2 
1 1 1 1 1 1 2
1 1 1 1 1 1 1 1

1 2 3 5 8 13 21

*/