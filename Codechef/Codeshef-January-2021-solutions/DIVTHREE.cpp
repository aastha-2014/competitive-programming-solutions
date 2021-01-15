#include <bits/stdc++.h>

using namespace std;

#define ll long long



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t,n,k,d,p,sum;
    cin>>t;
 while(t--){
        cin>>n>>k>>d;
        sum=0;
     

            for(int i=0;i<n;i++){
            cin>>p;
            sum+=p;
        }
        
        if(sum<k)
        {
            cout<<"0"<<endl;
        
        }
        else{
        
         sum=ceil(sum/k);
        
        cout<<min(sum,d)<<endl;
        }

     
 }
 return 0;
    

}