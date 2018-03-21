#include<bits/stdc++.h>
using namespace std;
int main(){

int R1,C1,R2,C2;
cin>>R1>>C1>>R2>>C2;
if(abs(R1-R2)==abs(C1-C2))
    {cout<<1<<endl;return 0;}
int state1,state2;
if(((R1%2)&&(C1%2))||(!(R1%2)&&!(C1%2)))
    state1=1;
else
    state1=2;

if(((R2%2)&&(C2%2))||(!(R2%2)&&!(C2%2)))
    state2=1;
else
    state2=2;
if(state1==state2)
    cout<<2<<endl;
else
    cout<<-1<<endl;

}
