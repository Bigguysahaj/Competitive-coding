// link to the problem statement https://www.codechef.com/JUNE221D/problems/EQUALSTRING/

#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int num,i,j;
	    int cnt=0;
	    cin>>num;
	    string stra,strb;
	    cin>>stra>>strb;
	    for(i=0;i<num;i++){
	        
	        if(strb[i]!=stra[i]){
	        
	        for(j=0;j<num;j++){
	            
	            if(strb[j]!=stra[j]&&strb[j]==strb[i]){
	                stra[j]=strb[j];    
	            }
	        }
	        cnt++;
	    }} 
	    cout<<cnt;
	    cout<<endl;
	}
	return 0;
}
