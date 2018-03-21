#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int >Alena(N);vector<int >Boris(M);
    int l=min(N,M);
    for(int i=0;i<N;i++)
    {
        cin>>Alena[i];
    }
    for(int i=0;i<M;i++)
    {
        cin>>Boris[i];
    }
    sort(Alena.begin(),Alena.end(),std::greater<int>());sort(Boris.begin(),Boris.end(),std::greater<int>());
    int A=0,B=0;
    for(int i=l-1;i>-1;i--)
    {
        cout<<Alena[i]<<endl;
        cout<<Boris[i]<<endl;

        if(Alena[i]>Boris[i])
            A++;
        else
            B++;
    }
    cout<<A<<" "<<B<<endl;
}
