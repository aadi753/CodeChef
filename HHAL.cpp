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

		//check if already palindrome
		//else select all 'a' in one move and all 'b' in other move

		int i = 0;
		int j = s.size() - 1;

		int ans = 1;

		while(i < j){
			if(s[i] != s[j]){
				ans = 2;
				break;
			}
			i++;
			j--;
		}

		cout << ans << "\n";

		//MY APPROACH 
		// int i, j;

		// int ans = 0;

		// while(s.size() > 0){
		// 	ans++;

		// 	i = 0;
		// 	j = s.size() - 1;

		// 	string temp = "";

		// 	while(j > i){
		// 		if(s[i] == s[j]){
		// 			i++;
		// 		}
		// 		else{

		// 			if(j == i + 1 && temp.size() > 0){
		// 			    //cout << temp << ' ';
		// 				if(temp[0] == s[i]){
		// 					temp += s[i];
		// 				}
		// 				else{
		// 					temp += s[j];
		// 				}
		// 			}
		// 			else{
		// 				temp += s[j];
		// 			}
		// 		}

		// 		j--;
		// 	}
		// 	//cout << temp << ' ';
		// 	s = temp;
		// }


		// cout << ans << "\n";
	}
	return 0;
}