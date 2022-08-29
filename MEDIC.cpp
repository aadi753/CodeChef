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

		//first 4 = year
		//next is :
		//next 2 are month
		//next : 
		//next 2 are date

		string yearstr = s.substr(0, 4);
		string monthstr = s.substr(5, 2);
		string datestr = s.substr(8, 2);

		//cout << yearstr << ' ' << monthstr << " " << datestr << '\n';

		int year = stoi(yearstr);
		int month = stoi(monthstr);
		int date = stoi(datestr);

		//cout << year << month << date << "\n";

		//calculate leap years then feb will have 29 days

		//starting from today dd mm yy
		//take next 2 day later
		//he will take it on odd day if today is odd day 
		//else even 

		int odd = 0;
		if(date % 2){
			odd = 1;
		}

		//check when is the next odd day 

		//jan = 31
		//feb = 28
		//...
		//dec = 31

	}
	return 0;
}