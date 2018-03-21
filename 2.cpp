#include<bits/stdc++.h>
#define mod1 (long long)(1e9+7)
using namespace std;
long long power(long long x, long long int y, long long p)
{
    long long  res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){
int t;
cin>>t;
long long x,y;
while(t--){
cin>>x>>y;
long long p=y-x;
//long long sol=0;
//for(long long i=1;i<=p;i++)
//{
//sol =(sol+(long long)power(((((x+i)%mod1)<<1)-1),2,mod1))%mod1;
//
//}

//long long term1= (long long )power((((x*2)% mod1) -1 )% mod1,2,mod1)%mod1;
//cout<<term1<<endl;
//long long term3= (long long )((p*(p+1))/2)%mod1;
//cout<<term3<<endl;

//long long term2= (long long )((p*(p+1)(2*p+1))/6)%mod1;
//cout<<term2<<endl;

long long sol=(p*(((((2*x)%mod1)-1)%mod1)*((((2*x)%mod1)-1)%mod1))%mod1)%mod1;
//cout<<sol<<endl;

long long term1=((((((p *((((p+1)%mod1)*((((2*p)%mod1)+1)%mod1))%mod1))%mod1)%mod1)/6)%mod1)*4)%mod1;
//cout<<term1<<endl;
long long term2=((4*((p*((p+1)%mod1))%mod1))%mod1)%mod1;
//cout<<term2<<endl;
sol=(((sol+(term1+(x*term2)%mod1)%mod1)%mod1)-(term2/2))%mod1;

cout<<sol<<endl;
}



}
