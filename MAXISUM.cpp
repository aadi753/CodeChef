#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long long interaction(long a[], long b[], long n){
	long long res = 0;
	
	for(long i = 0; i < n; i++){
		res += a[i] * b[i];
	}

	return res;
}

long long getMaxInteraction(long a[], long b[], long n, long long k){
	long long ans = interaction(a, b, n);

	long max = 0;
	//just find the maximum value of abs(b[i]) and multiply it by k;
	for(long i = 0; i < n; i++){
		if(abs(b[i]) > max){
			max = abs(b[i]);
		}
	}

	long long x = k * max;
	ans = ans + x;
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long long k;
		cin >> k;

		long a[n], b[n];

		for(long i = 0; i < n; i++){
			cin >> a[i];
		}

		for(long i = 0; i < n; i++){
			cin >> b[i];
		}

		cout << getMaxInteraction(a, b, n, k) << "\n";
	}
	return 0;
}

// #include<iostream>
// #include <bits/stdc++.h>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// long long interaction(int a[], int b[], int n){
// 	long long res = 0;
	
// 	for(int i = 0; i < n; i++){
// 		res += a[i] * b[i];
// 	}

// 	return res;
// }

// long long getMaxInteraction(int a[], int b[], int n, long k){
// 	long long ans = interaction(a, b, n);

// 	for(int i = 0; i < n; i++){
// 		//try increasing this element by k
// 		a[i] += k;
// 		ans = max(ans, interaction(a, b, n));
// 		//a.b + k * b[i]
// 		a[i] -= k;


// 		//try decreasing

// 		a[i] -= k;
// 		ans = max(ans, interaction(a, b, n));
// 		a[i] += k;
// 	}

// 	return ans;
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;

// 		long k;
// 		cin >> k;

// 		int a[n], b[n];

// 		for(int i = 0; i < n; i++){
// 			cin >> a[i];
// 		}

// 		for(int i = 0; i < n; i++){
// 			cin >> b[i];
// 		}

// 		cout << getMaxInteraction(a, b, n, k) << "\n";
// 	}
// 	return 0;
// }