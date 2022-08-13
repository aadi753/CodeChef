#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long bin_to_num(string str){
	long long num = 0;
	long long power = 1;

	int n = str.size();

	for(int i = n - 1; i >= 0; i--){
		if(str[i] == '1'){
			num += power;
		}

		power *= 2;
	}

	return num;
}

string num_to_bin(long num){
	string res = "";

	while(num > 0){
		if(num % 2 == 0){
			res += '0';
		}
		else{
			res += '1';
		}

		num /= 2;
	}

	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;
	while(t--){
		long c;
		cin >> c;

		//covert c to binary rep

		string s = num_to_bin(c);
		int n = s.size();

		string a = "", b = "";
		a += s[n- 1];

		for(int i = n - 2; i >= 0; i--){
			if(s[i] == '0'){
				//set both to 1a
				a += '1';
			}
			else{
				//set a to 0 and b to 1
				a += '0';
			}

			b += '1';
		}

		long long ans = bin_to_num(a) * bin_to_num(b);

		cout << ans << "\n";
	}
	return 0;
}