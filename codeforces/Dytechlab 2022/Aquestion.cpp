 #include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0);
// #define anant ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
const long long int m = 1000000007;


int main(){

#ifdef ONLINEJUDGE
       freopen("inputf.txt","r",stdin); //can need to change file . this one for taking input
       freopen("outputf.txt","w",stdout); // this one for output
#endif
    
    fastio;
    int test;
    cin >> test;
    while(test--)
    {

        int  n,k;
        cin>>n>>k;
        int ap[26];
        string s;
        cin>>s;
        map<char,int> m;
        for(auto it : s){
            m[it]++;
        }

        for(int i = 0; i < 26; i++) ap[i] = 0; 
        for(auto it: m){
            ap[it.first - 'a'] = it.second;
            }
        // for(int i=0;i<26;i++)  {
        //     cout<<ap[i]; 
        // }
        int a=k;
        string ans="";
        while(k--){
            int flag=1;
            int mex=n/a;
            for(int i=0;i<mex;i++){
                if(ap[i]==0){
                    flag=0;
                    mex=i;
                    break;
                }
                ap[i]--;
            }
            ans.push_back('a'+ mex);
            
          
        }
        cout<<ans<<endl;
    }
   return 0;
}
