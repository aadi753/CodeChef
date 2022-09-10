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
		int n;
		cin >> n;

		int m;
		cin >> m;

		int q;
		cin >> q;

		string ans = "Consistent";
		char sign;
		int num;
		int flag = 1;
		
		unordered_set<int> st;
		int total = 0;

		for(int i = 0; i < q; i++){
			cin >> sign;
			cin >> num;
			//cout << sign << ' ' << num << '\n';
	
			if(flag){

				if(sign == '+'){
					//enter
					//check if the total > m
					//incosistent 
					total++;

					if(total > m){
						ans = "Inconsistent";
						flag = 0;
					}

					st.insert(num);
				}
				else{
					//exit
					//check if the passenger is leaving without entry
					if(st.find(num) == st.end()){
						flag = 0;
					}
					
					total--;
				}

			}			

		}

		if(flag == 0){
			ans = "Inconsistent";
		}

		cout << ans << '\n';
	}
	return 0;
}

/*

*/