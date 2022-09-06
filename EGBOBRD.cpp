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
	long long n, k;

	cin >> t;

	while(t--){
		
		cin >> n;
		cin >> k;

		long long num, rem = 0;
		long long ans = 0;
		
		// for(long i = 0; i < n; i++){
		// 	cin >> num;

		// 	if(num > rem){
			
		// 		//we will consume all the remaining ones
		// 		num -= rem;
				
		// 		//then we will open num / k packs
		// 		ans += ceil((float)num / (float)k);

		// 		if(num % k){
		// 			rem = k - (num % k); 
		// 		}
		// 		else{
		// 			rem = 0;
		// 		}
				
		// 	}	
		// 	else{
		// 		rem -= num;
		// 	}
			
		// 	if(rem > 0){
		// 		rem--;
		// 	}
		// }

		for(int i = 0; i < n; i++){
			//how many packs to open
			//rem + x * k >= num;
			//x = (num - rem) / k
			//if(num - rem) % k 
				//x += (num - rem) % k
			//if x < 0 x = 0
			
			cin >> num;

			long x = ceil((num - rem) / k);

			if((num - rem) % k){
				x += ((num - rem) % k);
			}

			if(x < 0){
				x = 0;
			}

			ans += x;

			rem += (x * k) - num;

			if(rem){
				rem--;
			}
		}

		cout << ans << "\n";
		
	}
	return 0;
}

/*

if(rem == 0)
		ans++;
		rem = k;


-------------------------------
//remaining breads in a pack
int rem = 0;
int ans = 0;

for(int i = 0; i < n; i++){
	
	if (num > rem)
		//we will consume all the remaining ones

		num -= rem;
		
		//then we will open num / k packs
		
		ans += ceil(num / k);
		rem = k - (num % k); 

	else{
		rem -= num;
	}
	

	
	if rem > 0
	rem--;	
}

// N, K, A[] = input

     cur = 0     //total number of breads available right now
     ans = 0     //total number of packages opened till now

     for i = 0 to N - 1:
          //solve for inequality cur + x*K >= A[i] where x>=0
          x = (A[i]-cur)/K + ((A[i]-cur)%K > 0)
    
          //if x < 0, no package required
          x = 0

          //increase answer if packages opened
          ans += x

          //change current number of breads left after consumption
          cur = cur +x*K- A[i]

          //decrease 1 bread if some number of breads are left
          if (cur > 0)
              cur--

     print ans
*/