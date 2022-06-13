//link to problem statement https://www.codechef.com/JUNE221D/problems/ALTERADD/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a,b;
	    cin>>a>>b;
	    int diff = b-a;
	    if (diff%3==0 || (diff-1)%3==0){
	        cout<<"YES"<<endl;
	    }
	    else if(diff==1 || diff==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
}
