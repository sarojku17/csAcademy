#include<bits/stdc++.h>
using namespace std;
int main(){

int N;
cin>>N;
int l=2;
int r=N;
int mid;
while(!(l>r))
{
    int answer;
    mid=(l+r)>>1;
    cout<<"Q "<<mid<<endl;
    cin>>answer;
    if(answer)
        l=mid+1;
    else
        r=mid;
    if(l==r)
        break;
}
cout<<"A "<<l<<endl;
}
