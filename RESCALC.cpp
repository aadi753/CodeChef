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
		int n, num, m;
		
		cin >> n;

		//INPUT
		int arr[n][6] = {};
		int scores[n] = {};
        
		for(int i = 0; i < n; i++){
			cin >> m;
			scores[i] += m;
				
			for(int j = 0; j < m; j++){
				cin >> num;
				arr[i][num - 1]++;
			}
		}

// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < 6; j++){
// 				cout << arr[i][j] << ' ';
// 			}
// 			cout << '\n';
// 		}


		//PROCESS
		//max type of cookies stored
		//get min number of cookies > 1
		//if that many cookies are in all boxes then add min to score 
		//then again find min > 1
		//if that many cookies are in 5 boxes then add min to score 
		//then again find min
		//if min in 4 boxes
		//then score += min
		int count;
        int min;
        
		for(int i = 0; i < n; i++){
			int temp[6];
		    for(int j = 0; j < 6; j++){
		        temp[j] = arr[i][j];
		    }
		    
		    sort(temp, temp + 6);
			
			min = temp[0];
			for(int j = 0; j < 6; j++){
				if(min == 0){
					min = temp[j];
				}
				else if(temp[j] && temp[j] < min){
					min = temp[j];
				}
			}


			count = 0;
			for(int j = 0; j < 6; j++){
				if(temp[j] < min){
					count++;
				}
			}

			if((count == 0) && (min > 0)){
			    //cout << "+4" << '\n';
				scores[i] += (min * 4);
				for(int j = 0; j < 6; j++){
					temp[j] = temp[j] - min;
				}
			}

			//packing 5 in a box
			min = temp[0];
			for(int j = 0; j < 6; j++){
				if(min == 0){
					min = temp[j];
				}
				else if(temp[j] && temp[j] < min){
					min = temp[j];
				}
			}

			count = 0;
			for(int j = 0; j < 6; j++){
				if(temp[j] < min){
					count++;
				}
			}

			if((count <= 1) && (min > 0)){
			    //cout << "+2" << '\n';
				scores[i] += (min * 2);
				for(int j = 0; j < 5; j++){
					temp[j] -= min;
				}
			}

			//packing 4 in a box
			min = temp[0];
			for(int j = 0; j < 6; j++){
				if(min == 0){
					min = temp[j];
				}
				else if(temp[j] && temp[j] < min){
					min = temp[j];
				}
			}
			
			count = 0;
			for(int j = 0; j < 6; j++){
				if(temp[j] < min){
					count++;
				}
			}

			if((count <= 2) && (min > 0)){
			    //cout <<  "+1" << "\n";
				scores[i] += min;
			}

		}



		//OUTPUT
		//if two or more people have same score "tie"
		//if chef has max score then "chef"
		//else number of player
    
        // for(int i = 0; i < n; i++){
        //     cout << scores[i] << '\n';
        // }
        
		int max = -1;
		for(int i = 0; i < n; i++){
			if(scores[i] > max){
				max = scores[i];
			}
		}


		int player = 0;
		for(int i = 0; i < n; i++){
			if(scores[i] == max){
				if(player){
					player = -1;
					break;
				}
				else{
					player = i + 1;
				}
			}
		}


		if(player == -1){
			cout << "tie" << '\n';
		}
		else{
			if(player == 1){
				cout << "chef" << '\n';
			}
			else{
				cout << player << '\n';
			}
		}

	}
	return 0;
}