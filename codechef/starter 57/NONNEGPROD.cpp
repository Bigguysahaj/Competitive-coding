#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long int
const long long int m = 1000000007;


int main() {
    fastio;
    int test;
    cin >> test;
    while(test--)
    {
        
	ll n, prod;
	cin>>n;
	vector<ll> v(n);
	prod = 1;
	for(long long int i =0; i<n; i++){
	    cin>>v[i];
	    prod = (v[i]*prod)%m;
	}
	
	if (prod<0){
	    cout<<1<<endl;
	}else{
	    cout<<0<<endl;
	}
	
	
    }
	return 0;
}
