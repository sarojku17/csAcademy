#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int vowels[]={'a','e','i','o','u'};
set<char>Set(vowels,vowels+6);
int counter=0;
for(int i=0;i<s.size()-1;i++)
    if(Set.find(s[i])!=Set.end())
        if(Set.find(s[i+1])!=Set.end())
            counter++;
cout<<counter<<endl;
//for(int i=0;i<n)



}
