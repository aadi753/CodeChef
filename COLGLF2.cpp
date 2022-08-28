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

		int intro[n];
		for(int i = 0; i < n; i++){
			cin >> intro[i];
		}

		//we need a 2d vector to store the lengths of episodes
		vector<vector<int>> length_of_episodes;

		int number_of_episodes;
		int length_of_episode;

		for(int i = 0; i < n; i++){
			cin >> number_of_episodes;
			vector<int> length_of_episodes_this_season;

			for(int j = 0; j < number_of_episodes; j++){
				cin >> length_of_episode;

				length_of_episodes_this_season.push_back(length_of_episode);
			}

			length_of_episodes.push_back(length_of_episodes_this_season);
		}

		//we have the length of episodes in all seasons 
		//chef will watch the first ep full
		//then length - intro length

		long long ans = 0;

		for(int i = 0; i < n; i++){
		    
			for(int j = 0; j < length_of_episodes[i].size(); j++){
				
				if(j > 0){
					ans += length_of_episodes[i][j] - intro[i];
				}
				else{
					ans += length_of_episodes[i][j];
				}

			}
			
		}

		cout << ans << "\n";

	}
	return 0;
}