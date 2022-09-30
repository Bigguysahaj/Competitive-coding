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
    long long int test;
    cin >> test;
    while(test--)
    {
    ll n;
    ll res=0;
    cin>>n;
    vector <ll> a(n);
    vector <ll> b(n);
    vector <ll> b0(n);
    vector <ll> b1(n);

    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++){
        cin>>b[i];
        if(a[i] == 0) b0.push_back(b[i]);
        else b1.push_back(b[i]);
    }

    sort(b0.begin(), b0.end(), greater<ll>());
    sort(b1.begin(), b1.end(), greater<ll>());
    ll sumb = accumulate(b.begin(), b.end(), 0LL);

    int zeros = n - accumulate(a.begin(), a.end(), 0LL);
    int ones = n - zeros;
    int min = *min_element(b.begin(), b.end());
    int max = *max_element(b.begin(), b.end());

    if(ones == zeros) cout<< (2*sumb) - min<<endl;

    else if(ones>zeros && zeros!=0){

        res = accumulate(b1.begin(), b1.begin()+zeros,0LL) + accumulate(b0.begin(), b0.begin()+zeros,0LL);
        cout<<res+sumb<<endl;
    }

    else if(ones<zeros && ones!=0){


        res = accumulate(b0.begin(), b0.begin()+ones,0LL)+ accumulate(b1.begin(), b1.begin()+ones,0LL);
        cout<<res+sumb<<endl;
    }

    else cout<<accumulate(b.begin(), b.end(), 0LL)<<endl;
}
   return 0;
}
