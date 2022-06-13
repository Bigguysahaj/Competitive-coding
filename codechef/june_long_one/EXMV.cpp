//link to the problem statement https://www.codechef.com/JUNE221D/problems/EXMV/


#include <iostream>
using namespace std;
#define ll long long

ll sum(ll x, ll n){
    ll sum = (x-1)*(2*n - x);
    return sum;
}

int main() {
	int test;
	cin>>test;
	while(test--){
	    ll X,N;
        cin>>X>>N;
	    cout<<sum(X,N);
	    cout<<endl;
	}
	return 0;
}
