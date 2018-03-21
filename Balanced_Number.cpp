#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>dict(10);
string S;
cin>>S;
for(int i=0;i<S.size();i++)
    dict[S[i]-'0']++;
int x=dict[0];
bool flag=false;
for(int i=1;i<10;i++)
    if(dict[i]!=x)
        {flag=true;break;}

if(flag)
    cout<<0<<endl;
else
    cout<<1<<endl;
}
