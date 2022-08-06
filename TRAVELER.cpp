#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	//number of cities
	int n;
	cin >> n;

	//maping cities to indices
	map <string, int> city_names;

	//taking city inputs
	string city;
	for(int i = 0; i < n; i++){
		cin >> city;
		city_names[city] = i;
	}

	//a distance matrix to store the roads btw cities
	int distance_matrix[n][n] = {};

	//take distances btw cities
	//no. of roads
	int m;
	cin >> m;

	string city1, city2;
	int d;

	//input roads
	for(int i = 0; i < m; i++){
		cin >> city1;
		cin >> city2;

		//find the corresponding values 
		//then store the distance in matrix

		int city1_cord = city_names[city1];
		int city2_cord = city_names[city2];

		cin >> d;

		distance_matrix[city1_cord][city2_cord] = d;
	}

	// //print the distances between the cities
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < n; j++){
	// 		cout << distance_matrix[i][j] << ' ';
	// 	}
	// 	cout << "\n";
	// }



	//no. of queries / trips
	int t;
	cin >> t;

	while(t--){

		//no. of cities in route
		int k;
		cin >> k;

		long long total_distance = 0;
		int error = 0;

		string prev = "";
		string city_name;

		//to check if city is already visited??
		int visited[n] = {};
		
		//going from one city to next
		for(int i = 0; i < k; i++){
			cin >> city_name;

			//cout << city_name << ' ';
			//calculate the distance btw the current and prev city if the cities are valid 
			
			//check if the city exists or not
			auto itr = city_names.find(city_name);

			if(itr != city_names.end()){

				//find index of city
				int y = city_names[city_name];
		
				//check if already visited
				if(visited[y]){
					error = 1;
				}
				else{
					visited[y] = 1;

					if(prev != ""){
						
						int x = city_names[prev];
						
						//cout << x << ' ' << y << "\n";

						int curr_dist = distance_matrix[x][y];

						//check if a road exists or not
						if(curr_dist == 0){
							error = 1;
						}
						else{
							total_distance += curr_dist;
						}
						
					}

					prev = city_name;
				}

				
			}
			else{
				error = 1;
			}
		}

		if(error){
			cout << "ERROR" << "\n";
		}
		else{
			cout << total_distance << "\n";
		}
	}


	return 0;
}