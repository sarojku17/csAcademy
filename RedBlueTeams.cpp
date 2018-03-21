#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,R,K;
    cin>>N>>R>>K;
    int B=N-R;
    int maxRed=R,minRed=R;
    int temp;

    temp=min(K,R);
    minRed-=temp;
    minRed+=(K-temp);
    cout<<minRed<<" ";

    temp=min(K,B);
    maxRed+=temp;
    maxRed-=(K-temp);
    cout<<maxRed<<endl;



}
