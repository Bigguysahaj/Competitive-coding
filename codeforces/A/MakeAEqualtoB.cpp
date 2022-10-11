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

        int a;
        cin>>a;
        vector<int>va(a);
        vector<int>vb(a);
        int onea= 0;
        int oneb = 0;
        for(auto &i: va){
            cin>>i;
            if (i==1){
                onea++;
            }
        }
        for(auto &i: vb){
            cin>>i;
            if (i==1){
                oneb++;
            }
        }
        int chng=0;
        if(onea-oneb !=0){
            chng = abs(onea-oneb);
        }else{
            chng =0;
        }
        int kchng=0;
        for(int i=0; i<a; i++){

            if ( va[i]!=vb[i] ){
                va[i] = 1-va[i];
                    kchng++;
            }
        }

        if (kchng != chng){
            chng++;
            cout<<chng<<endl;
        }else{
            cout<<chng<<endl;
        }
    }
   return 0;
}

