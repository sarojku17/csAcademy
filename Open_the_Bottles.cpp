#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>bottle1(3);vector<int>bottle2(3);vector<int>bottle3(3);
for(int i=0;i<3;i++)
cin>>bottle1[i];
for(int i=0;i<3;i++)
cin>>bottle2[i];
for(int i=0;i<3;i++)
cin>>bottle3[i];

int   time=0;
time=*min_element(bottle1.begin(),bottle1.end());
time+=*min_element(bottle2.begin(),bottle2.end());
time+=*min_element(bottle3.begin(),bottle3.end());
cout<<time<<endl;



}
