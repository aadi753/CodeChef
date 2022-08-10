#include<iostream>
#include <bits/stdc++.h>
// #include<regex>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;

	while(t--){
		string s = "";
		while(s == ""){
			getline(cin, s);
		}

		string ans = "Error";
		int correct = 0;

		if(s.size() == 5){
			if(s[0] >= 'a' && s[0] <= 'h'){
				if(s[1] >= '1' && s[1] <= '8'){
					if(s[2] == '-'){
						if(s[3] >= 'a' && s[3] <= 'h'){
							if(s[4] >= '1' && s[4] <= '8'){
								correct = 1;
							}
						}
					}
				}
			}
		}

		// if(regex_match( s, regex("[a-h][1-8]-[a-h][1-8]") )){
		// 	correct = 1;
		// }
		
		int x_dist, y_dist, dist;

		if(correct){
			//+-1 on one and +-2 on another
			//distance == 5 then "yes"
			
			x_dist = s[4] - s[1];
			y_dist = s[3] - s[0];

			x_dist = (x_dist * x_dist);
			y_dist = (y_dist * y_dist);

			dist = x_dist + y_dist;

			if(dist == 5){
				ans = "Yes";
			}
			else{
				ans = "No";
			}
		}

		cout << ans << "\n";
	}
	return 0;
}