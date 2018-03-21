#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
vector<int>array1(N);
for(int i=0;i<N;i++)
    cin>>array1[i];
sort(array1.begin(),array1.end());
long sum=0;
for(int i=0;i<N;i+=2)
    sum+=abs(array1[i]-array1[i+1]);
cout<<sum<<endl;

}
