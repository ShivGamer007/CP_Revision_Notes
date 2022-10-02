#include<bits/stdc++.h>
using namespace std;
// #define ve vector<int>
typedef vector<int> ve;
#define loop(i,l,r) for(int i=l;i<r;i++)

int main(){
    
    ve arr={-2,10,1,3,2,-1,4,5};
    int n=arr.size();
    int k=3;
    int s=0,ans=INT_MAX;
    loop(i,0,k){
        s+=arr[i];
    }
    ans=min(ans,s);
    loop(i,1,n-k+1){
        s-=arr[i-1];
        s+=arr[i+k-1];
        ans=min(ans,s);
    }
    cout<<ans<<endl;
    
    
    return 0;
}