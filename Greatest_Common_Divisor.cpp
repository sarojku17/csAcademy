#include<bits/stdc++.h>
using namespace std;

long gcd(long A,long B){
if(A<B)
    swap(A,B);

if(A==B)
    return A;
else if(B==0)
    return A;

else
    gcd(A%B,B);


}

int main(){
long A,B;
cin>>A>>B;
cout<<gcd(A,B)<<endl;

}
