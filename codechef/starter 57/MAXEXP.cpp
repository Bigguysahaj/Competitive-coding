#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i,a,b) for(int i=a;i<b;i++)
#define int3 int a,b,c; cin>>a>>b>>c
#define int4 int a,b,c,d; cin>>a>>b>>c>>d
#define boost ios_base::sync_with_stdio(0),cin.tie(0)
#define endl '\n'

string solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countSign=0;
    f(i,0,n)
        if(s[i]=='+' || s[i]=='-')
            countSign++;
    int justChar = n-countSign;
    sort(s.rbegin(), s.rend());
    string signs = s.substr(justChar);
    string res = "";
    for(int i=0; i<countSign; i++) {
        res = res + s[justChar-1-i];
        res = res + signs[i];
    }
    reverse(res.begin(), res.end());
    int x = res.length();
    string final = s.substr(0,n-x);
    final = final+res;
    return final;
}

int main() {
    boost;
	int t; cin>>t;
	while(t--)
	{
	    cout<<solve()<<endl;
	}
	
	return 0;
}
