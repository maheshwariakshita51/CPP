// Count Even and Odd Using Map
#include<iostream>
using namespace std;
#include<vector>
#include<map>
map<string,int> countEvenOdd(vector<int>num)
{
    map<string,int>count;
    for(int i=0;i<num.size() ;i++)
    {
        if(i%2==0)
        {
           count["evencount"]++;
        }
        else{
            count["oddcount"]++;
        }
    }
    return count;
}
int main()
{
    vector<int>num ={44,45,47,48,99,66,24,13};
    map<string,int> ans = countEvenOdd(num);
    for(auto it:ans)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }
}
