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
		string s;
		cin >> s;

		// int ans = 1;
		// int curr = 1;

		// for(int i = 0; i < s.size(); i++){
		// 	if(s[i] == '>'){
		// 		if(curr == ans){
		// 			ans++;
		// 		}
		// 		curr++;
		// 	}
		// 	else if(s[i] == '<'){
		// 		if(curr == 1){
		// 			ans++;
		// 		}
		// 		else{
		// 			curr--;
		// 		}
		// 	}
		// }

		int curr = 0;
		int max = 0;
		char prev = s[0];

		int i = 0;

		while(i < s.size()){

			if(s[i] != '='){
				
				if(s[i] == prev){
					curr++;
				}
				else{
					if(curr > max){
						max = curr;
					}

					curr = 1;
				}

				prev = s[i];

			}
			
			i++;
		}

		if(curr > max){
			max = curr;
		}

		cout << max + 1 << '\n';

	}
	return 0;
}

/*
start with 1 and every time you see < ans++; and curr++;
else if curr == 1 and we see a > then ans++; curr--;


>>>>
1 > 1 > 1 > 1
ans = 1
2 3 4
1 < 2 < 3 < 4 < 6 > 5 > 4 > 3 > 2 > 1 > 1 > 1 < 2
*/