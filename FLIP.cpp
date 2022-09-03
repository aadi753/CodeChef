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

		int i = 0, j = 0;
		int n = a.size();
		int ans = 0;

		while(i < n){

			if(a[i] != b[i]){
				//we have a diff at this position now go to all the pos till end 
				//and check if they are same
				//if same break;
				ans++;
				j = i;
				while(j < n){
					if(a[j] == b[j]){
						break;
					}

					if(a[j] == '1'){
						a[j] = '0';
					}
					else{
						a[j] = '1';
					}

					j += 2;
				}
			}
			
			i++;
		}

		cout << ans << "\n";
	}
	return 0;
}