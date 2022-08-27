#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, q;
	cin >> n >> q;

	std::vector<long> arr;
	long num;

	for(int i = 0; i < n; i++){
		
		cin >> num;
		arr.push_back(num);

	}

	sort(arr.begin(), arr.end());

	for(int i = 0; i < q; i++){
		cin >> num;

		string ans = "POSITIVE";

       	auto index = lower_bound(arr.begin(), arr.end(), num);

       	long found_at = index - arr.begin();


       	if(arr[found_at] == num){
       		ans = "0";
       	}
       	else if((n - found_at) % 2){
       		ans = "NEGATIVE";
       	}
       	
       	cout << ans << "\n";
        
 	}

	return 0;
}

// #include<iostream>
// #include <bits/stdc++.h>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
	
// 	int n, q;
// 	cin >> n >> q;

// 	long arr[n];
// 	for(int i = 0; i < n; i++){
// 		cin >> arr[i];
// 	}

// 	sort(arr, arr + n);

//     long num;
// 	for(int i = 0; i < q; i++){
// 		cin >> num;

//         long res;
//         int ans = 1;
//         int neg = 0;
        
// 		for(int i = 0; i < n; i++){
// 			if(arr[i] > 0){
// 				res = num - arr[i];
// 			}
// 			else{
// 				res = num + arr[i];
// 			}
            
// 			if(res == 0){
// 				ans = 0;
// 				break;
// 			}
// 			else if(res < 0){
// 				neg++;
// 			}
// 		}
		
// 		if(ans == 0){
// 			cout << 0;
// 		}
// 		else if(neg % 2){
// 			cout << "NEGATIVE";
// 		}
// 		else{
// 			cout << "POSITIVE";
// 		}

// 		cout << "\n";
//  	}

// 	return 0;
// }

/*

-1-1 = -ve
-1 + 1 

1 - 1 => 


-100 -10 -1 0 1 10 100

2

2 - 100
2 - 10
2 - 1


//calc till the sign changes
-2 - 100
-2 - 10
-2 - 1
-2 - 0
-2 + 1
-2 + 10

//count the number of negetive terms and check if res == 0
//then ans = 0
//curr = -1 if res < 0
//curr = +1 if res > 0
//else curr = 0

if curr == 0
ans = 0
break;
else if curr = +1
break;

*/