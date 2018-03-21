#include<bits/stdc++.h>
using namespace std;

long N, M, X, Y,sol=0;
bool check(long mid){
    if((M+(N-mid)*Y)<(mid*X))
        return false;
    else
        {sol=mid;return true;}


}
int main(){
cin>>N>>M>>X>>Y;
long l=0;
long r=N;
long mid;
while(!(l>r)){
    mid=(l+r)>>1;
    bool flag=check(mid);
    if(flag)
        l=mid+1;
    else
        r=mid-1;

}

cout<<sol<<endl;


}
