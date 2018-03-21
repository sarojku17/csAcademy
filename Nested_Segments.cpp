#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
vector<pair <int ,int > >range(N);
int l,r;
for(int i=0;i<N;i++)
{
    cin>>l>>r;
    range.push_back(make_pair(l,r));
}
int maxVal=0;
for(vector<pair <int, int> >::iterator it=range.begin();it!=range.end();it++)
{
    int temp=0;
    for(vector<pair <int, int> >::iterator it1=range.begin();it1!=range.end();it1++)
    {
        if(it1!=it)
        {
            if((it->first>it1->first)&&(it->second<it1->second))
            {

                  maxVal++;
                  break;


            }
        }

    }

}
cout<<maxVal<<endl;

}
