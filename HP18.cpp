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

		int a, b;
		cin >> a >> b;

		int both = 0, bob = 0, alice = 0;

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];

			if(arr[i] % a == 0 && arr[i] % b == 0){
				//both can take it 
				both++;
			}
			else if(arr[i] % a == 0){
				//bob can take it
				bob++;
			}
			else if(arr[i] % b == 0){
				//alice can take it
				alice++;
			}
		}

		string ans = "BOB";

		//check if number is for bob or alice or both
		//if for both bob will take it first

		//bob starts first 
		//both will empty the "both" first
		//then if(alice > bob) then alice wins
		//else bob wins

		//if both is odd bob gets it 
		//else alice gets it
		
		string turn = "BOB";
		
		if(both % 2 == 0){
			turn = "BOB";
		}
		else{
			turn = "ALICE";
		}
		
		//whoever turn is first must have more moves in order to win

		if(turn == "BOB"){
			//bob
			if(bob > alice){
				ans = "BOB";
			}
			else{
				ans = "ALICE";
			}
		}
		else{
			//alice
			if(alice > bob){
				ans = "ALICE";
			}
			else{
				ans = "BOB";
			}
		}

		cout << ans << "\n";
	}
	return 0;
}