#include <bits/stdc++.h>

using namespace std;

#define ll long long



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
     while(t--){
         int n,k,x,y;
         
         cin>>n>>k>>x>>y;
         map<int,int>m;
         m.insert(pair<int, int>(x, y));
         
         if(x==y){
            cout<<n<<" "<<n<<endl;
             
         }
         else{
             vector<pair<int,int>>vect;
             if(x<y){
                 int a[]={x+n-y,n,y-x,0};
                 int b[]={n,n-y+x,0,y-x};
                 for (int i=0; i<4; i++) 
                    vect.push_back( make_pair(a[i],b[i]) ); 
             }else{
                 int c[]={n,y+n-x,0,x-y};
                 int d[]={y+n-x,n,x-y,0};
                 for (int i=0; i<4; i++) 
                    vect.push_back( make_pair(c[i],d[i]) ); 
             }
             
             
            int x=(k-1)%4;
             cout<<vect[x].first<<" "<<vect[x].second<<endl;
             
         }
     
    }
    

}