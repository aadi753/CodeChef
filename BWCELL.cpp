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

		int n = s.size();
		//int blacks = 0;
		
		////count blacks
		// for(int i = 0; i < n; i++){
		// 	if(s[i] == 'B'){
		// 		blacks++;
		// 	}
		// }

		string ans = "Aleksa";

		//if equal Blacks on each side of W then Alice loses else she wins

		if((n % 2) && (s[(n / 2)] == 'W')){
			ans = "Chef";
		}

		cout << ans << '\n';

		// if(blacks == n){
		// 	//win
		// 	ans = "Alice";
		// }
		// else if(blacks == 0){
		// 	//lose
		// 	ans = "Chef";
		// }
		// else{
		// 	if(s[0] == 'W' || s[n - 1] == 'W'){
		// 		//win
		// 		ans = "Alice";
		// 	}
		// 	else{
		// 		if(blacks < 3){
		// 			//lose
		// 			cout << "Chef";
		// 		}
		// 		else{
		// 			if((s[0] == 'B' && s[1] == 'W') || (s[n - 2] == 'W' && s[n - 1] = 'B')){
		// 				//win
		// 				ans = "Alice";
		// 			}
		// 			else{
		// 				//if blacks are even = lose
		// 				//else win

		// 				if(blacks % 2){
		// 					//win
		// 					ans = "Alice";
		// 				}
		// 				else{
		// 					ans = "Chef";
		// 				}
		// 			}
		// 		}
		// 	}
		// }

	}
	return 0;
}


		//BBBWBWBB
		//if all first or last cell is white then aleska wins
		//else
		//BBWBBBWBBBWB
		//odd al
		//even bob
		//BBWBBBBB
		//if one on one side
		//BWB - bob wins
		//BWBB - al wins
		//BWBBB - al wins

		//BBBBWBBBB
		//if W 
		
		//BBBWBBB
		//BBBBWBBB 
		//BWWBWWB
		//all blacks on one side
		//WBBBBBB - win
		//BBBBBBW - win
		
		//all but one black on one side
		//BWWWWWB - lose
		//BWBB - win
		//BWBBB - win

		//BW at start = win
		//WB at last = win

		//at least two blacks on each sides
		//BBWBB - lose
		//BBBWBB - win

		//BBBWBBB - lose
		//BBBBWBBB - win
		//BBBBWBBBB - lose

		//W - no black = lose 