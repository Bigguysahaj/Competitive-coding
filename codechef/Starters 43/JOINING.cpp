https://www.codechef.com/START43D/problems/JOINING

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
        
	int num1, num2;
    cin>>num1>>num2;
    int temp = num1/5;
    if (num1%5==0){
        temp--;
    }
    int left = num2/5;
    if (num2%5==0){
        left--;
    }
    
    cout<<temp-left<<endl;
	
	
    }
	return 0;
}

