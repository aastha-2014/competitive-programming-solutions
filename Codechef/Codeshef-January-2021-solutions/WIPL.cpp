#include<bits/stdc++.h>
#define ll  long long int

using namespace std;

ll result(ll x,ll a[],ll n){
	int pos[x+1]={'\0'};
	pos[0]=1;
	for(int i=0;i<n;i++)
		for(int j=x;j>=a[i];j--){
			if(pos[j-a[i]]==1)
				pos[j]=1;
		}
		return pos[x];
}

void solve(){
	ll n,k;
	cin>>n>>k;
	ll sum=0,ans=0;
	ll a[n]={'\0'};
	
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	
	sort(a,a+n,greater<>());
	
	if(n==1 || sum<2*k){
		cout<<"-1\n";
		return;
	}
	
	else if(sum==2*k){
	    
		if(sum%2==1 || a[0]>k){
			cout<<"-1\n";
			return;
		}
		else if(a[0]==k){
			cout<<n<<"\n";
		}
		
		else{
			
			if(result(k,a,n)){
				cout<<n<<"\n";
				return;
			}
			else{
				cout<<"-1\n";
				return;
			}
		}
	}
	
	else if(a[0]>=k){
		ans =1;
		ll tempsum=0;
		for(ll i=1;i<n;i++){
			tempsum+=a[i];
			ans++;
			if(tempsum>=k){
				cout<<ans<<"\n";
				return ;
			}
			
		}
	}
	
	else{
		ll tempsum=0;
		for(ll i=0;i<n;i++){
			tempsum+=a[i];
			if(tempsum>=2*k){
				cout<<i+1<<"\n";
				return;
			}
		}	
		cout<<"-1\n";
	}
	
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}