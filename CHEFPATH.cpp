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

		string ans = "Yes";

        if(n == 1 && m != 2){
            ans = "No";
        }
        else if(m == 1 && n != 2){
        	ans = "No";
        }	
        else if((n % 2) && (m % 2)){
			ans = "No";
		}

		cout << ans << "\n";
	}
	return 0;
}

/*

- no

- - yes
- -

- - - no 
- - -
- - -

- - - - yes
- - - -
- - - - 
- - - -


- - - - - no

- no 
- 
- 
- 
-   

- - yes
- - 
- -
- -
- -

- - - - - no
- - - - -
- - - - -
*/