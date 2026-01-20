//even count and odd count by map
#include<bits/stdc++.h>
using namespace std;
map<string,int> frequencycount(vector<int> num)
{
    map<string,int>frqc;
    for(auto it:num)
    {
        if(it%2==0)
        {
            frqc["evencount"]++;
        }
        else
        {
            frqc["oddcount"]++;
        }
    }
    return frqc;
}
int main()
{
    vector<int> num={1,3,44,55,33,22,66,55,776,54,344,878};
    map<string,int> ans = frequencycount(num);
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
}










//FREQUENCY COUNT
#include<bits/stdc++.h>
using namespace std;
map<char,int> looptracing (string str)
{
    map<char,int>freqcount;
    for(auto it:str)
    {
       freqcount[it]++;
    }
    return freqcount;
}
int main()
{
    string str = "aakshhitttaa";
    map<char,int>freqcount = looptracing(str);
    for(auto it:freqcount)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }
}