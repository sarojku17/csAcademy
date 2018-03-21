#include<bits/stdc++.h>
using namespace std;
int main(){
 string s1;
 string s2;
 cin>>s1>>s2;
 for(int i=0;i<s1.size();i++)
 {
     cout<<s2[s1[i]-'a'];
 }
    cout<<endl;
}
