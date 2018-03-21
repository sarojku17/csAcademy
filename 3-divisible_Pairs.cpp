#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
vector<int>array(N);
for(int i=0;i<N;i++)
    cin>>array[i];
map<long,long >bag;
long long counter=0;
long long sol=0;
for(int i=0;i<N;i++)
    if((array[i]%3)==0)
        counter++;
    else
        bag[array[i]%3]++;
map<long ,long >::iterator it,it2;

for(it=bag.begin();it!=bag.end();it++)
    {
        it2=bag.find(3-it->first);
        if(it2!=bag.end())
            sol+=(it->second*it2->second);
    }

cout<<(sol+counter*(counter-1))/2<<endl;
}
