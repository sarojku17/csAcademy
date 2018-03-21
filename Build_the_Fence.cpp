#include<bits/stdc++.h>
using namespace std;
long N;long long K;
long max_height=0;
bool check(vector<long> trees,long mid){
if(mid==0) return false;
long sol=0;
for(long i=0;i<N;i++)
{
    sol+=floor(trees[i]/mid);
    if(sol>=K)
       {
         max_height=mid;
         return true;
       }
}
return  false;
}
int main(){
cin>>N>>K;vector<long> trees(N);
for(int i=0;i<N;i++)
    {
        cin>>trees[i];
    }
long l=1;
long r=(long)1e9;
long mid;
while(!(l>r))
{


    mid=(l+r)>>1;
    bool flag=check(trees,mid);
    if(flag)
        l=mid+1;
    else
        r=mid-1;

}
cout<<max_height<<endl;

}
