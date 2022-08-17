// #include<iostream>
// #include <bits/stdc++.h>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;

// 		int k;
// 		cin >> k;

// 		string s;
// 		cin >> s;

// 		int arr[n] = {};
// 		for(int i = 0; i < n; i++){
// 			if(s[i] == '1'){
// 				arr[i] = 1;
// 			}
// 		}

// 		//find the first 1 between 0 and n - k + 1 
// 		//and then select the next k elements and flip them 

// 		int i = 0;
// 		int max = n - k + 1;
// 		int chances = max;
// 		int curr;
		
// 		while(chances--){
// 			//find the first "one" after = i 
// 			curr = max;

// 			while(i < max){
// 				if(arr[i]){
// 					curr = i;
// 					i++;
// 					break;
// 				}
// 				i++;
// 			} 

// 			if(curr < max){
// 				//found the one at curr
// 				//select next k elements 
// 				for(int j = curr; j < curr + k; j++){
// 					arr[j] = !arr[j];
// 				}

// 			}
// 			else{
// 				break;
// 			}

// 		}

// 		for(int i = 0; i < n; i++){
// 			cout << arr[i];
// 		}

// 		cout << "\n";
// 	}
// 	return 0;
// }


// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;

// 		int k;
// 		cin >> k;

// 		string s;
// 		cin >> s;

// 		int i = 0;
// 		int max = n - k + 1;
// 		int chances = max;
// 		int curr;
		
// 		while(chances--){
// 			curr = max;

// 			while(i < max){
// 				if(s[i] == '1'){
// 					curr = i;
// 					i++;
// 					break;
// 				}
// 				i++;
// 			}

// 			if(curr < max){
// 				for(int j = curr; j < curr + k; j++){
// 					if(s[j] == '1'){
// 						s[j] = '0';
// 					}
// 					else{
// 						s[j] = '1';
// 					}
// 				}
// 			}
// 			else{
// 				break;
// 			}
// 		}
		
// 		cout << s << "\n";
// 	}
// 	return 0;
// }


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int k;
		cin >> k;

		string s;
		cin >> s;

		int flipped = 0;
		int chances = n - k + 1;
		int max = chances;
		int last_flipped = -1;

		for(int i = 0; i < n; i++){

			
			if(chances && i < max && (flipped && s[i] == '0') || (!flipped && s[i] == '1')){

				if(s[i] == '0'){
					flipped = 0;
				}
				else{
					flipped = 1;
					s[i] = '0';
				}

				last_flipped = i;
				
				chances--;
			}
			else{

				if(last_flipped > 0 && (i - last_flipped) == k){
					flipped = !flipped;
				}

				if(flipped){
					if(s[i] == '0'){
						s[i] = '1';
					}
					else{
						s[i] = '0';
					}
				}
			}
		}
		
		
		cout << s << "\n";
	}
	return 0;
}