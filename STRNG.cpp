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

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		long pre[n], suf[n];
		for(int i = 0; i < n; i++){
			pre[i] = arr[i];
			suf[n - i - 1] = arr[n - i - 1];

			if(i > 0){
				pre[i] = gcd(arr[i], pre[i - 1]);
				suf[n - i - 1] = gcd(arr[n - i - 1], suf[n - i]);
			}
		}

		long ans = 0;

		if(pre[n - 1] > 1){
			ans = n;
		}
		else{
			long p = 0, s = 0;

			for(int i = 0; i < n; i++){
				if(i > 0){
					p = pre[i - 1];
				}
				if(i < n - 1){
					s = suf[i + 1];
				}

				if(gcd(p, s) > 1){
					ans++;
				}
			}

			//for(int i = 0; i < n; i++){
		// 		if(i == 0){
		// 			suf[1] > 1;
		// 			ans++;
		// 		}
		// 		else if(i == n - 1){
		// 			pre[n - 1] > 1;
		// 			ans++;
		// 		}
		// 		else{
		// 			if(gcd(pre[i - 1], suf[i + 1]) > 1){
		// 				ans++;
		// 			}
		// 		}
		// 	}
		}

		cout << ans << '\n';

		// all = arr[0];
		// pre[0] = arr[0];
		// suf[n - 1] = arr[n - 1];

		// 5 10 20

		/*
		5

		5 5 5
		5 10 20
		2 2 2 3 2 2 2

		*/

		/*
			1 2 4 8 16

			1 1 1 1 1
			1 2 4 8 16
		*/

		/*

		2 2 2 3 2 2
		2 2 2 1 1 1
		1 1 1 1 2 2

		2 2 2 3 3 2 2
		2 2 2 1 1 1 1
		1 1 1 1 1 2 2
		*/

		// for(int i = 1; i < n; i++){
		// 	all = gcd(all, arr[i]);
		// 	pre[i] = gcd(arr[i], pre[i - 1]);
		// 	suf[n - i - 1] = gcd(arr[n - i - 1], suf[n - i]);
		// }

		// long ans = 0;

		// if(all > 1){
		// 	ans = n;
		// }
		// else{
		// 	for(int i = 0; i < n; i++){
		// 		if(i == 0){
		// 			suf[1] > 1;
		// 			ans++;
		// 		}
		// 		else if(i == n - 1){
		// 			pre[n - 1] > 1;
		// 			ans++;
		// 		}
		// 		else{
		// 			if(gcd(pre[i - 1], suf[i + 1]) > 1){
		// 				ans++;
		// 			}
		// 		}
		// 	}
		// }

		// else{
			

		//n - n - 1 - 1

		// 	// for(int i = 0; i < n; i++){
		// 	// 	//if gcd of remaining elements > 1 then ans++;
		// 	// 	if(i == 0){
		// 	// 		gcd1 = arr[1];
		// 	// 	}
		// 	// 	else{
		// 	// 		gcd1 = arr[0];
		// 	// 	}

		// 	// 	for(int j = 0; j < n; j++){
		// 	// 		if(i == j){
		// 	// 			continue;
		// 	// 		}

		// 	// 		gcd1 = gcd(gcd1, arr[j]);
		// 	// 	}

		// 	// 	if(gcd1 > 1){
		// 	// 		ans++;
		// 	// 	}
		// 	// }

		// 	//GCD is 1

		// 	// long gcd1 = arr[0], curr_gcd = arr[0];
		// 	// int flag = 0;
		// 	// ans = 1;

		// 	// for(int i = 0; i < n; i++){
		// 	// 	//execpt 1 element everything else should have gcd > 1

		// 	// 	curr_gcd = gcd(gcd1, arr[i]);

		// 	// 	if(flag && i > 1){
		// 	// 		ans = 0;
		// 	// 		break;
		// 	// 	}

		// 	// 	if(curr_gcd == 1){
		// 	// 		flag = 1;
		// 	// 		//don't count this as gcd
		// 	// 		if(i == 0){
		// 	// 			gcd1 = arr[1];
		// 	// 		}
		// 	// 	}
		// 	// 	else{
		// 	// 		gcd1 = curr_gcd;
		// 	// 	}
		// 	// }
		// }

		//check if gcd of remaining array is > 1 or not 
		//cout << ans << '\n';
	}
	return 0;
}

/*

	for i in range(n):
		pref[i] = a[i]
		suf[n-1-i] = a[n-1-i]
		if i > 0:
			pref[i] = gcd(pref[i], pref[i-1])
			suf[n-1-i] = gcd(suf[n-1-i], suf[n-i])
	if pref[n-1] > 1:
		print(n)
		continue
	ans = 0
	for i in range(n):
		p, s = 0, 0
		if i > 0:
			p = pref[i-1]
		if i+1 < n:
			s = suf[i+1]
		if gcd(p, s) > 1:
			ans += 1
	print(ans)

*/