
// https://www.codechef.com/JUNE221D/problems/DIVBYI link to the problem statement



#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


int main() {
	int test;
	cin>>test;
	while(test--){
	    int n,a;
	    int e = 1;
	    cin>>n;
	    a = n/2;
	    if (n%2!=0){
	        a++;
	    }
	   vector<int> v(n);
	   v[0] = a;
	   int o = n;
	   for (int i=1; i<n; i++){
	       if (i%2==0){
	           v[n-i]= e;
	           e++;
	       }else{
	           v[n-i]= o;
	           o--;
	           //cout<<v[i]<<i;
	        }
	   }
	    for (auto i = 0; i<v.size(); i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
