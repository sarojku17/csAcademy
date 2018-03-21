#include<bits/stdc++.h>
using namespace std;
int main(){
int N,M;
cin>>M>>N;
vector<int> array1(N);
for(int i=0;i<N;i++)
    cin>>array1[i];
sort(array1.begin(),array1.end());
for(int i=0;i<M;i++)
{
    int A,B;
    cin>>A>>B;
    vector<int>::iterator x=lower_bound(array1.begin(), array1.end(), A);
    vector<int>::iterator y=upper_bound(array1.begin(), array1.end(), B);
    //scout<<x-array1.begin()<<endl;
    cout<<y-x<<endl;
}


}
