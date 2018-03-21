#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
vector<int>array1(N);
for(int i=0;i<N;i++)
    cin>>array1[i];
vector<int>odd(N);
vector<int>even(N);

    if(array1[N-1]%2==0)
        {even[N-1]=1;odd[N-1]=0;}
    else
        {even[N-1]=0;odd[N-1]=1;}

for(int j=N-2;j>=0;j--)
    if(array1[j]%2==0)
        {
            even[j]=even[j+1]+1;
            odd[j]=odd[j+1];
        }
    else
        {
            even[j]=even[j+1];
            odd[j]=odd[j+1]+1;
        }
long sol=0;
for(int i=0;i<N;i++)
    if(array1[i]%2==0)
        sol+=odd[i];
    else
        sol+=even[i];

cout<<sol<<endl;
}

