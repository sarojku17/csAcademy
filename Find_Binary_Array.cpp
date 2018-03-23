#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>left(n);
vector<int>right(n);
vector<int>solution(n);

for(int i=0;i<n;i++)
    cin>>left[i];
for(int i=0;i<n;i++)
    cin>>right[i];

for(int i=0;i<n-1;i++)
    if(left[i]<left[i+1])
        solution[i]=0;
    else
        solution[i]=1;

if(right[n-2]>right[n-1])
    solution[n-1]=0;
else
    solution[n-1]=1;

for(int i=0;i<n;i++)
    cout<<solution[i]<<" ";
//cout<<endl;


}
