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

		int even_count[n];
		int num;
		int curr = 0;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num % 2 == 0){
				curr++;
			}

			even_count[i] = curr;
		}
		
		//0 0 1 2 2 

		int q;
		cin >> q;

		int l, r;

		for(int i = 0; i < q; i++){
			cin >> l >> r;
			l--;
			r--;

			int evens = even_count[r];

			if(l){
				evens -= even_count[l - 1];
			}

			string ans = "EVEN";

			if(evens == 0){
				ans = "ODD";
			}
            
            //cout << evens << ' ';
			cout << ans << '\n';
		}


	}
	return 0;
}

/*
//there shouldn't be any even numbers between l and r;

1 3 2 4 5
1 2 2 2 3
1 1 1
0 1 0 
1 0 0 
0 0 0 

if(l == 1){
	odd = arr[r - 1];
}
else{
	odd = arr[r - 1] - arr[l - 2];
}

if(odd % 2 == 0){
	//all odds cancel each other then 
	ans = "EVEN";
}
else{
	ans = "ODD";
}

3 2 1 1 1



001
011
010
100
101

ltr => 001 001 000 000 000
rtl => 000 000 000 100 101

000 even 

*/