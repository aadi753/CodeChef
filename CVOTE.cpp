#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	int m;
	cin >> m;

	std::map<string, int> chef;
	std::map<string, int> countries;
	std::map<string, string> candidate;

	string name, country;

	for(int i = 0; i < n; i++){
		//names of chefs and there countries
		//make a map of chef names with values as country
		//also make a map of countries with value total score
		//alse make a map of chef names with respective scores

		cin >> name;
		cin >> country;

		candidate[name] = country;
		chef[name] = 0;
		countries[country] = 0;
	}

	for(int i = 0; i < m; i++){
		cin >> name;
		chef[name]++;
		countries[candidate[name]]++;
	}	

	string cofty;
	int max = 0;

	for(auto itr = chef.begin(); itr != chef.end(); itr++){
		if(itr -> second > max){
			max = itr -> second;
			cofty = itr -> first;
		}
	}

	string win_country;
	int total_max = 0;

	for(auto itr = countries.begin(); itr != countries.end(); itr++){
		if(itr -> second > total_max){
			total_max = itr -> second;
			win_country = itr -> first;
		}
	}

	cout << win_country << "\n";
	cout << cofty << "\n";
	return 0;
}