#include<bits/stdc++.h>
using namespace std;
int main(){

int N;
cin>>N;
vector<int> arr(N);
for(int i=0;i<N;i++)
    cin>>arr[i];
int sum=accumulate(arr.begin(),arr.end(),0);
sum-=*min_element(arr.begin(),arr.end());
sum-=*max_element(arr.begin(),arr.end());
cout<<floor((float )sum/(N-2))<<endl;

}
