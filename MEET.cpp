#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int to_num(string s, string zone){
	int num;

	int h, m;
	h = stoi(s.substr(0, 2));
	m = stoi(s.substr(3, 2));

	if(h == 12){
		h = 0;
	}

	num = h * 60 + m;

	if(zone == "PM"){
		num += (12 * 60);
	}

	return num;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string time;
		cin >> time;
		
		string x;
		cin >> x;

		int p = to_num(time, x);

		int n;
		cin >> n;

		int ans[n] = {};
        
        string l, r;
        
		for(int i = 0; i < n; i++){
			cin >> l;
			cin >> x;

			int start = to_num(l, x);

			cin >> r;
			cin >> x;

			int end = to_num(r, x);

			if(p >= start && p <= end){
				ans[i] = 1;
			}
			
			//cout << start << ' ' << p << ' ' << end << "\n";

		}

		for(int i = 0; i < n; i++){
			cout << ans[i];
		}

		cout << "\n";
	}
	return 0;
}

/*
convert all the given times in 24 hour format
if AM then as it is else if PM
then add 12 hours to it
ans = h * 60 + m;
if(x = PM)
	ans += 12 * 60

	12 * 60 + 12 * 60 + 60

if(h == 12){
	h = 0;
}

12 AM = 0

12 PM = 12

*/