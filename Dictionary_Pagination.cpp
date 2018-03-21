#include<bits/stdc++.h>
using namespace std;


bool compare(const string& first, const string& second)
{
  unsigned int i=0;
  while ( (i<first.length()) && (i<second.length()) )
  {
    if (first[i]<second[i]) return true;
    else if (first[i]>second[i]) return false;
    ++i;
  }
  return ( first.length() < second.length() );
}


int main(){
int N,Q;
cin>>N>>Q;
vector<string> words(N);
for(int i=0;i<N;i++)
    cin>>words[i];
sort(words.begin(),words.end());
//for(int i=0;i<N;i++)
  //  cout<<words[i]<<" ";


map<string,int> bag;
for(int i=0;i<N;i++)
    {
        bag[words[i]]=i+1;
    }

for(int i=0;i<Q;i++)
{
    string temp;int x;
    cin>>temp>>x;
    int num=bag.find(temp)->second;
    cout<<ceil((float)num/x)<<endl;

}
}


