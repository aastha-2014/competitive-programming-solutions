#include <bits/stdc++.h>

using namespace std;

#define ll int




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
       int t;
	   cin >>t;
	   while(t--){
	       int size1;
	       int size2;
	       cin>>size1>>size2;
	       int* arr1=new int[size1];
	       int* arr2=new int[size2];
	       int sum1=0,sum2=0;
	       for(int i=0;i<size1;i++){
	           cin>>arr1[i];
	           sum1+=arr1[i];
	       }
	       for(int i=0;i<size2;i++){
	           cin>>arr2[i];
	           sum2+=arr2[i];
	       }
	       if(sum1>sum2){
	           cout<<"0"<<endl;
	           continue;
	       }
	     
	       sort(arr1,arr1+size1);
	       sort(arr2,arr2+size2);
	       int count=0;
	       int j=size2-1;
	       for(int i=0;i<size1;i++){
	           sum1=sum1-arr1[i]+arr2[j];
	           sum2=sum2-arr2[j]+arr1[i];
	           //sum1=sum1+arr2[j];
	           //sum2=sum2+arr1[i];
	           count++;
	           j--;
	           if(sum1>sum2 || j<0){
	               break;
	           }
	       }
	       if(sum1>sum2){
	           cout<<count<<endl;
	       }else{
	           cout<<"-1"<<endl;
	       }
	   }
	   return 0;
	
}