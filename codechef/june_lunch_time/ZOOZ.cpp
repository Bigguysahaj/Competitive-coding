#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long


int main() {
    fastio;
    int test;
    cin >> test;
    while(test--)
    {
       int n;
       cin>>n;
       if(n%2==0)
       {
        cout<<"1";
       for(int j=1;j<n-1;j++)
       {
       cout<<"0";
       }
       cout<<"1"<<endl;
       }
       else
       {
              for(int i=0;i<n/2;i++)
              {
                     cout<<"0";
              }
              cout<<"1";
              
              for(int i=(n/2)+1;i<n;i++)
              {
                     cout<<"0";
              }
              cout<<endl;
       }
        
    }
	return 0;
}
