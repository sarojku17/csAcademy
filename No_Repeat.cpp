#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
string s;
cin>>s;
int arr[26]={};
map<int,int> bag;
for(int i=0;i<n;i++)
{
    arr[s[i]-'a']++;
    if(arr[s[i]-'a']==1)
        bag[s[i]]=i;
    else
        bag.erase(s[i]);
}
int minIndex=s.size();
char sol;

for(map<int,int>::iterator it=bag.begin();it!=bag.end();it++){
    int x=it->second;
    if(x<minIndex)
    {
        minIndex=x;
        sol=s[x];
    }


}
if(bag.size()==0)
    cout<<-1<<endl;
else
cout<<sol<<endl;
}
