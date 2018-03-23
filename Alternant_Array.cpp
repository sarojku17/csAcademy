#include<bits/stdc++.h>
using namespace std;
int xorVec(vector<int> v1,vector<int> v2){
int counter=0;
for(int i=0;i<v1.size();i++)
{
    counter+=v1[i]^v2[i];
}
return counter;
}

int main(){
int x;
cin>>x;
vector<int>arr(2*x);
vector<int>final1(2*x);
vector<int>final2(2*x);
for(int i=0;i<2*x;i++)
{
    cin>>arr[i];
}
for(int i=0;i<2*x;i++)
    if(i%2==0)
        final1[i]=1;
    else
        final1[i]=0;

for(int i=0;i<2*x;i++)
    if(i%2==0)
        final2[i]=0;
    else
        final2[i]=1;
cout<<min(xorVec(arr,final1),xorVec(arr,final2))/2<<endl;


}
