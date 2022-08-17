#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

string num_to_bin_rev(long long num, long len){
	string bin_rep = "";

	while(num > 0){
		if(num % 2 == 1){
			bin_rep += '1';
		}
		else{
			bin_rep += '0';
		}
		num = num / 2;
		len--;
	}

	for(int i = 0; i < len; i++){
		bin_rep += '0';
	}

	return bin_rep;
}

long long bin_to_num(string str){
	long long res = 0;
	long long numb = 1;

	for(int i = str.size() - 1; i >= 0; i--){
		if(str[i] == '1'){
			res += numb;
		}

		numb *= 2;
	}

	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		
		long k;
		cin >> k;

		long l = 1;
		for(int i = 0; i < k; i++){
			l = l * 2;
		}
		//l = 2 ^ k

		string s;
		cin >> s;

		char ans[l];

		//the first char remains the same 
		ans[0] = s[0];

		for(long long i = 1; i < (l - 1); i++){

			char c = s[i];

			//convert i to binary of length l it returns the reversed representation
			string bin = num_to_bin_rev(i, k);

			//get the new number (convert binary to normal)
			long long num = bin_to_num(bin);

			//store at that place in ans array 
			ans[num] = c;

		}


		//last also remains the same
		ans[l - 1] = s[l - 1];

		string answer = "";

		for(int i = 0; i < l; i++){
			answer += ans[i];
		}

		cout << answer << "\n";

	}
	return 0;
}