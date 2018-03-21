#include<bits/stdc++.h>
using namespace std;
int main(){

int N,K;
cin>>N>>K;
map<int ,int>bag;
set<int> sol;
for(int i=0;i<N;i++)
    {
        int temp;cin>>temp;
        bag[temp]++;
        if(bag[temp]>=K)
        sol.insert(temp);
    }
    cout<<sol.size()<<endl;

}
