#include<bits/stdc++.h>
using namespace std;
int main(){
map<pair<int,char>,int >bag;
int N;
cin>>N;
int Shoesize; char oren;
for(int i=0;i<N;i++)
{
    cin>>Shoesize>>oren;
    bag[make_pair(Shoesize,oren)]++;
}
long match=0;
for(map< pair<int,char>,int >::iterator it=bag.begin();it!=bag.end();it++)
{
    int x;
    x=it->first.first;
    char y=it->first.second;
    if(it->second==0)
        continue;
    map< pair<int,char>,int >::iterator it2;
    if(y=='L')
        it2=bag.find(make_pair(x,'R'));
    else
        it2=bag.find(make_pair(x,'L'));
    if(it2!=bag.end()&&it2->second!=0){
        int temp=min(it->second,it2->second);
        match+=temp;
        it->second-=temp;
        it2->second-=temp;
    }
}
cout<<match<<endl;
}
