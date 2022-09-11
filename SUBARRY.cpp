#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	long n;
	cin >> t;
	while(t--){
		//input
		cin >> n;

		long long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		//preprocess

		long long ltr[n];
		long long rtl[n];

		for(long i = 0; i < n; i++){
			
			if(i == 0 || ltr[i - 1] == 0){
				ltr[i] = arr[i];
			}
			else{
				ltr[i] = ltr[i - 1] * arr[i];
			}

			if(i == 0 || rtl[i - 1] == 0){
				rtl[i] = arr[n - i - 1];
			}
			else{
				rtl[i] = rtl[i - 1] * arr[n - i - 1];
			}

		}
		
		//print preprocess

        for(long i = 0; i < n; i++){
		    cout << ltr[i] << ' ';
		}
		cout << '\n';
		
		for(int i = 0; i < n; i++){
		    cout << rtl[i] << ' ';
		}
		cout << '\n';

		//process
		//find max
		long long max = LONG_MIN;

		long last_neg_index = -1;
		//keep track of last negetive number to check if removing upto that can make the number bigger or not
		for(int i = 0; i < n; i++){
			if(arr[i] * arr[i] > max){
				max = arr[i] * arr[i]; 
			}

			if(ltr[i] > max){
				max = ltr[i];
			}

			if(rtl[i] > max){
				max = rtl[i];
			}

			if(last_neg_index >= 0){
				//there exist a negetive element befo
			}
		}

		
		long long min = arr[0] * arr[0];

		for(int i = 0; i < n; i++){
			
			if(ltr[i] > max){
				max = ltr[i];
			}
			
			if(rtl[i] > max){
				max = rtl[i];
			}
			
			if(arr[i] * arr[i] > max){
				max = arr[i] * arr[i];
			}
			
			if(arr[i] * arr[i] < min){
			    min = arr[i] * arr[i];
			}
			
			
			//while updating min make sure if ltr or rtl == arr then sq it
			if(i > 0 && ltr[i] == arr[i] && ltr[i - 1] == 0){
			    //already done
			}
			else if(ltr[i] < min){
				min = ltr[i];
			}
			
			if(i < n - 1 && rtl[i] == arr[i] && rtl[i + 1] == 0){
			    //already done
			}
			else if(rtl[i] < min){
				min = rtl[i];
			}
		}


		//output
		cout << min << ' ' << max << '\n';
	}
	return 0;
}

/*
if arr contains 0 then min = 0
and max = product of all positive number

else{
	min = odd number of negetive numbers and positive numbers
	max = even number of negetive numbers and positive number
}

//for max find max(|A|) and square it
		//for min find the smallest number
		//if min number > 0
		//min = square of that number 
		//else min = min * max


		long long min = -1, max = 0;

		long num;
		vector<long> pos;
		vector<long> neg;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num == 0){
				min = 0;
			}
			else if(num > 0){
				max *= num;
			}
			else{
				neg.push_back(num);
			}
		}



		//if arr contains 0 then min = 0
		if(min != 0){

			min = max;

			//get even number of negetive numbers
			int x = 0;
			if(neg.size() % 2){
				x = 1;
			}

			for(int i = 0; i < neg.size() - x; i++){
				max *= neg[i];
			}

			x = 1 - x;

			for(int i = 0; i < neg.size() - x; i++){
				min *= neg[i]; 
			}

		}

		cout << min << ' ' << max << '\n';
		long long min = arr[0] * arr[0], max = arr[0] * arr[0];
		long long curr;

		for(int i = 0; i < n; i++){
			curr = arr[i] * arr[i];
			if(curr > max){
				max = curr;
			}

			if(curr < min){
				min = curr;
			}

			curr = 1;
			for(int j = i + 1; j < n; j++){
				curr *= arr[j];

				if(curr > max){
					max = curr;
				}

				if(curr < min){
					min = curr;
				}
			}
		}
*/