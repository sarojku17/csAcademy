#include<bits/stdc++.h>
using namespace std;
int main(){

int Q,K;
double S;
cin>>S>>Q>>K;
vector<int>percent(Q);
for(int i=0;i<Q;i++)
    cin>>percent[i];
sort(percent.begin(),percent.end());
for(int i=0;i<Q;i++)
S+=max(S*((double)percent[i]/100),(double)K);
cout<<fixed;
cout<<std::setprecision(5)<<S<<endl;


}
