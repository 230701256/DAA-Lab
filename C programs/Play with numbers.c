#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int dp[n+1];
    for(int i=1;i<=n;i++){
        dp[i]=0;
    }
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i-1>=0)
            dp[i]+=dp[i-1];
        if(i-3>=0)
            dp[i]+=dp[i-3];
    }
    printf("%lld",dp[n]);
    return 0;
}