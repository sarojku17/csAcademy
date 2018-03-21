#include<bits/stdc++.h>
using namespace std;
int main(){
long x;
cin>>x;
vector<long> dp(x+5);
dp[0]=0;
dp[1]=0;
dp[2]=1;
dp[3]=1;
long value1,value2,value3;
for(int i=4;i<=x;i++)
{
    value1=value2=value3=LONG_MAX;
    if(i%3==0)
    value1=dp[i/3]+1;
    if((i+1)%3==0)
    value2=dp[(i+1)/3]+2;
    value3=dp[i-1]+1;
    dp[i]=min(value1,min(value2,value3));
}
cout<<dp[x]<<endl;
}



