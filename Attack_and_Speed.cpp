#include<bits/stdc++.h>
using namespace std;

long A, S, K, X, Y;

int check(long mid){
long long tempA=A,tempS=S;
tempA+=mid*X;
tempS+=(K-mid)*Y;
    //cout<<"A"<<tempA<<endl;
    //cout<<"S"<<tempS<<endl;
if(tempA<tempS)
    return 1;
else if(tempA>tempS)
    return -1;
else
    return 0;

}
int main(){
cin>>A>>S>>K>>X>>Y;

long l=0;
long r=K;
long mid;
int flag=0;
while(!(l>r)){
    mid=(l+r)>>1;
    //cout<<"mid"<<mid<<endl;

    flag=check(mid);

    //cout<<"flag"<<flag<<endl;
    if(flag==1)
        l=mid+1;
    else if(flag==-1)
        r=mid-1;
    else
        break;

}
if(flag==0)
    cout<<mid<<endl;
else
    cout<<-1<<endl;

}
