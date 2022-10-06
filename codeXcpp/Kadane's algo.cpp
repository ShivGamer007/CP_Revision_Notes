#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    if (n==0){
        return 0;
    }
    int sm=0,mx=arr[0];
    
    //kadane's algo:
    for(int i=0;i<n;i++){
        sm+=arr[i];
        mx=max(sm,mx);
        if (sm<0){
            sm=0;
        }
    }
    cout<<mx<<" ";
    
    return 0;
}