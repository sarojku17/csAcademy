#include<bits/stdc++.h>
using namespace std;
int main(){

int N;
cin>>N;
vector<long >number(N);
for(int i=0;i<N;i++)
    cin>>number[i];
map<long ,long> bag;
long maxSum=0;
long totalSum=0;
for(long i=0;i<N;i++)
{
    totalSum+=number[i];
    bag[number[i]]+=number[i];
    if(bag[number[i]]>maxSum)
        maxSum=bag[number[i]];

}
cout<<totalSum-maxSum<<endl;


}
