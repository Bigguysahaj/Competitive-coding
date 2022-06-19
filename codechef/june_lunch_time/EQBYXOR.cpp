#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long

void solve() 
{ 
   long long a, b, n; 
   long long res = 0; 
   cin >> a >> b >> n; 
   if(a == b)  
   {  
      cout << 0 << endl;  
      return;  
   } 
   long long c = a ^ b; 
   long long conv = (long long)(log2(c)); 
   long long result = (1 << conv); 
   if(c < n) 
   { 
      cout << 1 << endl; 
   } 
   else if(result >= n)  
   { 
    cout << -1 << endl; 
   } 
   else 
   { 
         long long ex_num = c, cfff = 0, pic = n, gys = 0; 
         long long i = 0; 
         while(ex_num > 0) 
         { 
            long long rem = ex_num % 2; 
            long long cur = cfff + rem * (1 << i); 
            i++; 
            ex_num = ex_num / 2; 
            if(cur < n) 
            { 
               cfff = cur; 
               continue; 
            } 
            else 
            { 
               cfff = cur - cfff; 
               gys++; 
            } 
         } 
         cout << gys + 1 << endl; 
   }
}

int main(){
    fastio;
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }
	return 0;
}
