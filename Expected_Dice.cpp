#include<bits/stdc++.h>
using namespace std;
int main(){

map<int ,int>dice1;
map<int ,int>dice2;map<int ,int>result;
for(int i=0;i<6;i++)
{
    int temp;
    cin>>temp;
    dice1[temp]++;
}
for(int i=0;i<6;i++)
{
    int temp;
    cin>>temp;
    dice2[temp]++;
}


map<int ,int>::iterator it1,it2;
int maxFrequency=0;
int expectedDice;
    for(it1=dice1.begin();it1!=dice1.end();it1++)
    {
        for(it2=dice2.begin();it2!=dice2.end();it2++)
        {

            int sumResult=it1->first+it2->first;
            int frequency=it1->second*it2->second;
            result[sumResult]+=frequency;
            if(maxFrequency<result[sumResult])
            {

                    expectedDice=sumResult;
                    maxFrequency=result[sumResult];
            }
            else if(maxFrequency==result[sumResult])
            {

                    expectedDice=min(sumResult,expectedDice);

            }
        }
    }

cout<<expectedDice<<endl;




}
