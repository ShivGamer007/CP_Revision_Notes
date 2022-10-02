#include <bits/stdc++.h>
#define vc vector<int>
#define loop(i,k,n) for(int i = k;i < n;i++)
using namespace std;
int findlength(vc num1,vc num2){
    int n1=num1.size(),n2=num2.size();
    vc dp(n2+1,0);
    int res=0;
    loop(i,0,n1){
        for (int j=n2-1;j>=0;j--){
            if(num1[i]==num2[j]){
                dp[j+1]=dp[j]+1;
            }
            else{
                dp[j+1]=0;
            }
            res=max(res,dp[j+1]);
        }
    }
    return res;
}

int main()
{
    vc n={1,2,3,2,1};
    vc m={1,2,3,4,5};
    int x=findlength(n,m);
    cout<<x<<"yes\n";

    return 0;
}
