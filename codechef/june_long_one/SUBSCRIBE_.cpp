//link to problem statement https://www.codechef.com/problems/SUBSCRIBE_

#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n,x;
	    cin>>n>>x;
	    int acc= 0;
	    if(n%6==0){
	        acc = n/6;
	    }else{
	        acc = n/6 +1;
	    }
	    cout<<acc*x<<endl;
	}
	return 0;
}
