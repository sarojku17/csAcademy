#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
vector<string>collection(N);
for(int i=0;i<N;i++)
    cin>>collection[i];

map<vector<int>,int>bag;
int maxVal=-1;
for(int i=0;i<N;i++)
    {
        vector<int>word(26,0);
        for(int j=0;j<collection[i].size();j++)
        {
            word[collection[i].at(j)-'a']++;
        }
        bag[word]++;
        int x=bag[word];
        if(maxVal<x)
            maxVal=x;
    }
cout<<maxVal<<endl;



}
