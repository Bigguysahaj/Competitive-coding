https://www.codechef.com/START43D/problems/DNASTORAGE/


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
    int n,a;
    cin>>n;
    string str;
    cin>>str;
    string ans = "";
 
    for(int i =0; i<n;i+=2){
        if (str.at(i) == '0' && str.at(i+1) =='0'){
            ans+="A";
        }else if(str.at(i) == '0' && str.at(i+1) =='1'){
            ans+="T";
        }else if(str.at(i) == '1' && str.at(i+1) =='0'){
            ans+="C";
        }else{
            ans+="G";
        }
    }
    
    cout<<ans<<endl;
    
	
    }
	return 0;
}
