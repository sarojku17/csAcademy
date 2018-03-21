#include<bits/stdc++.h>
using namespace std;

int main(){
int N,K;
cin>>N>>K;
vector<int> glass(N);
for(int i=0;i<N;i++)
    cin>>glass[i];
sort(glass.begin(),glass.end());
long sum=accumulate(glass.begin(),glass.begin()+K,0);

cout<<ceil((float)sum/100)<<endl;



}
