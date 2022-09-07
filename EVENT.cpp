#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::map<string, int> mp = {
		{"saturday", 1}, 
		{"sunday", 2},
		{"monday", 3},
		{"tuesday", 4},
		{"wednesday", 5}, 
		{"thursday", 6},
		{"friday", 7}
	};

	//-2+1
	//-1+7
	//1 + 1 + 7 

	long t;
	cin >> t;
	while(t--){
		string start;
		cin >> start;

		string end;
		cin >> end;

		int time = mp[end] - mp[start] + 1;

		if(time < 0){
			time += 7;
		}

		int l;
		cin >> l;

		int r;
		cin >> r;

		int curr = time;

		string ans = "impossible";
		int flag = 0;

		int res;


		while(curr <= r){
			if(curr >= l){
				if(flag){
					ans = "many";
					break;
				}
				else{
					res = curr;
					flag = 1;
					ans = "";
				}
			}

			curr += 7;
		}

		if(ans == ""){
			cout << res;
		}
		else{
			cout << ans;
		}
		
		// int x = ceil((l - time) / 7);
		// int y = (r - time) / 7;

		// int time1 = time + 7 * x;
		// int time2 = time + 7 * y;

		// //if any of these are in between l and r then ans exist
		// //else doesn't;
		// bool one = (time1 >= l && time1 <= r);
		// bool two = (time2 >= l && time2 <= r);


		// if(one || two){
		// 	if(one && two){
		// 		if(time1 == time2){
		// 			cout << time1;
		// 		}
		// 		else{
		// 			cout << "many";
		// 		}
		// 	}
		// 	else{
		// 		if(one){
		// 			cout << time1;
		// 		}
		// 		else{
		// 			cout << time2;
		// 		}
		// 	}
		// }
		// else{
		// 	cout << "impossible";
		// }

		// if(time <= r){
		//     //find the last number that can be fitted = (r / time)
		//     //time + 7 * x >= l && time + 7 * x <= r;
		//     //x = (l - time / 7)
		//     int x = r / time;
		//     if((x * time) >= l){

		//     	//ans can be many or one

		// 		if(((x * time) - 7) >= l && ((x * time) - 7) <= r){
		// 			cout << "many";
		// 		}
		// 		else{
		// 			cout << time;
		// 		}

		//     }
		//     else{
		//         cout << "impossible";
		//     }
			
		// }
		// else{
		// 	cout << "impossible";
		// }

		cout << "\n";

	}
	return 0;
}