// link to the problem statement https://www.codechef.com/JUNE221D/problems/DISTGCD/

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int countFact(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
 
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a,b, m;
	    cin>>a>>b;
	    m = abs(a-b);
	    cout<<countFact(m)<<endl;
	}
	return 0;
}
