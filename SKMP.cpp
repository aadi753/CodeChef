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
		string s;
		cin >> s;
		
		string p;
		cin >> p;

		//make arrays of alphabets 
		long arr[26] = {};
		for(long i = 0; i < s.size(); i++){
			arr[s[i] - 'a']++;
		}

		int small = 0;

		for(long i = 0; i < p.size(); i++){
			arr[p[i] - 'a']--;
		}
		
		for(int i = 1; i < p.size(); i++){
		    //if prev == curr it is okay 
		    //else the first diff term that we encounter should be smaller than curr;
		    if(p[i] == p[i - 1]){
		        continue;
		    }
		    
		    if(p[i] < p[i - 1]){
		        small = 1;
		    }
		    
		    break;
		}
        
        int flag = 1;
		for(int i = 0; i < 26; i++){
			char c = 'a' + i;  
			
// 			if(flag){
// 				if(small && c == p[0]){
// 					cout << p;
// 					flag = 0;
// 				}
// 				else if((small == 0) && (c > p[0])){
// 				    cout << p;
// 				    flag = 0;
// 				}
// 			}
			
			if(flag && small && c == p[0]){
			    cout << p;
			    flag = 0;
			}
			else if(flag && !small && c > p[0]){
			    cout << p;
			    flag = 0;
			}
			
			
			
			for(int j = 0; j < arr[i]; j++){
				cout << c;
			}
		}
		
		if(flag){
		    cout << p;
		}

		cout << "\n";
	}
	return 0;
}

// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main()
// {
//     int t;
//     cin >> t;
 
//     while(t--)
//     {
//         string s,p;
//         cin >> s >> p;
 
//         int cnt[26] = {0};
 
//         for(char i:s) cnt[i-'a']++;
 
//         for(char i:p) cnt[i-'a']--;
 
//         int flag = 1;
 
//         for(int i=1;i<p.size();i++)
//         {
//             if(p[i] == p[i-1])
//                 continue;
 
//             if(p[i] < p[i-1])
//                 flag = 0;
            
//             break;
//         }
 
//         int pos = p[0] - 'a' + flag;
 
//         for(int i=0;i<pos;i++)
//         {
//             while(cnt[i] > 0)
//             {
//                 char c = 'a' + i;
//                 cout << c;
//                 cnt[i]--;
//             }
//         }
 
//         cout << p;
 
//         for(int i=pos;i<26;i++)
//         {
//             while(cnt[i] > 0)
//             {
//                 char c = 'a' + i;
//                 cout << c;
//                 cnt[i]--;
//             }
//         }
//         cout << endl;
//     }
// }  