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

		string s;
		cin >> s;

		long ans = 0;
        int size = s.size();
        
		for(int i = 0; i < size - 1; i++){
		    int max = min(size, i + 10);
			for(int j = i + 1; j < max; j++){
			    
				if(j - i == abs((s[j] - '0') - (s[i] - '0'))){
					ans++;
				}
				

			}
		}

		cout << ans << '\n';

	}
	return 0;
}