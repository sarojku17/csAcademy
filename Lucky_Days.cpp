#include<bits/stdc++.h>
using namespace std;
int main(){

int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++)
    cin>>arr[i];
int maxVal=0;
int counter=0;
for(int i=0;i<N;i++)
    if(arr[i]>maxVal)
        {
            counter++;
            maxVal=arr[i];
        }
cout<<counter<<endl;


}
