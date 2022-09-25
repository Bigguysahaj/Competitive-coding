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
	string bin;
	string nbin = "";
	string nobin = "";
	cin>>bin;
	if (n <= 2){
	    cout<<bin<<endl;
	    continue;}
	else{
	    for(int i=0; i<n; i++){
	        if (bin[i] == '1'){
	            nbin += "1";
	        }else{
	            nobin += "0";
	        }
	    }
	}
	
	cout<<nobin+nbin<<endl;
	
    }
	return 0;
}
