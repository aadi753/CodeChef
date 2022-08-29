#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

vector<long long> perfect_squares;

void precompute(){
	string s;
	long long numb;
	int flag;

	for(long long i = 1; i < 100001; i++){
		numb = i * i;
		s = to_string(numb);
		
		flag = 1;

		for(int j = 0; j < s.size(); j++){
			if(s[j] == '0' || s[j] == '1' || s[j] == '4' || s[j] == '9'){
				continue;
			}

			flag = 0;
			break;
		}

		if(flag){
			perfect_squares.push_back(numb);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	precompute();
    
	int t;
	long long a, b;
	cin >> t;

	while(t--){
		
		cin >> a;
		cin >> b;
    
    	auto lower = lower_bound(perfect_squares.begin(), perfect_squares.end(), a);
        auto upper = upper_bound(perfect_squares.begin(), perfect_squares.end(), (b));
        
        
        int x = lower - perfect_squares.begin();
        int y = upper - perfect_squares.begin();
        
        
		//long long ans = lower_bound(perfect_squares.begin(), perfect_squares.end(), b) - upper_bound(perfect_squares.begin(), perfect_squares.end(), a);

		//cout << x << ' ' << y;


		cout << y - x << '\n';
	}
	return 0;
}