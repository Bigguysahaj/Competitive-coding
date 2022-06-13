//https://www.codechef.com/problems/CHAIRS_ (link to problem statement)

#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int x,y;
	    cin>>x>>y;
	    if (x<=y){
	        cout<<0<<endl;
	    }else{
	        cout<<(x-y)<<endl;
	    }
	}
	return 0;
}
