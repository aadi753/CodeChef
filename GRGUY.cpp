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
		string a;
		cin >> a;

		string b;
		cin >> b;

		int n = a.size();

		string ans = "Yes";
		int jumps = 0;

		int count1 = 0, count2 = 0;

		//starting from a and jumping whenever a obstical encountered jump at 0 not included
		int is_a = 1;
		if(a[0] == '#'){
			is_a = 0;
		}

		int is_b = 1;
		if(b[0] == '#'){
			is_b = 0;
		}

		for(int i = 0; i < n; i++){
			if(a[i] == '#' && b[i] == '#'){
				ans = "No";
				break;
			}

			if(is_a && a[i] == '#'){
				is_a = 0;
				count1++;
			}

			if(!is_a && b[i] == '#'){
				is_a = 1;
				count1++;
			}

			if(is_b && b[i] == '#'){
				is_b = 0;
				count2++;
			}

			if(!is_b && a[i] == '#'){
				is_b = 1;
				count2++;
			}

		}
		
		jumps = count1;

		if(count2 < count1){
			jumps = count2;
		}

		cout << ans << "\n";
		if(ans == "Yes"){
			cout << jumps << "\n";
		}

	}
	return 0;
}

/*

3
#...#
.###.

...#...
...#...

#.#.#.
.#.#.#

#...
#...

*/