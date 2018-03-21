#include<bits/stdc++.h>
using namespace std;
bool check(long mid,vector<int>numbers,int N)
{
    if(numbers[0]-numbers[N-1]<=mid)
        return true;
    else
        return false;

}

int main(){
int N;
cin>>N;
vector<int>numbers(N);
for(int i=0;i<N;i++)
    cin>>numbers[i];
sort(numbers.begin(),numbers.end());
long l=0;
long r=(long)1e9;
long mid;
while(!(l>r)){
    mid=(l+r)>>1;
    bool flag=check(mid,numbers,N);
    if(flag)
        r=mid;
    else
        r=mid+1;
}
cout<<mid<<endl;

}
