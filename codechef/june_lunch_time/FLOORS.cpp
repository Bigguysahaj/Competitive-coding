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
        int a,b;
        cin>>a>>b;
        
        if (a%10 == 0){
            a--;
        }
        if (b%10 == 0){
            b--;
        }
        
        cout<< abs(a/10 - b/10)<<endl;
	 
    }
	return 0;
}
