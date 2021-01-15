#include <bits/stdc++.h>

using namespace std;

#define ll long long


ll convert(string s) {
    ll n=stoi(s);
    
    ll dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char a [16] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    ll t,n,num;
    string s,s1;
    // char a [16] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    cin>>t;
    while(t--){
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i=i+4){
        s1=s.substr(i,4);
        num=convert(s1);
        cout<<a[num];
    }
    cout<<endl;
}
// delete a;
}