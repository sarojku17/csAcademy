#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
vector<int>time(26);
for(int i=0;i<26;i++)
cin>>time[i];
long  sol=0;
for(int i=0;i<s.size();i++)
{
    sol+=time[s[i]-'a'];
}
cout<<sol<<endl;


}
