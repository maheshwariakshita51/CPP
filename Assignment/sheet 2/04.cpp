//Count Duplicate Elements
#include<iostream>
using namespace std;
#include<vector>
#include<map>
int countduplicate(vector<int>num)
{
    int count=0;
    map<int,int> frqc;
    for(int i=0 ;i<num.size();i++)
    {
        frqc[num[i]]++;
    }
    for(auto it:frqc)
    {
        if(it.second>1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int>num = {1,2,3,3,4,4,5,6,6,7,7};
    cout<<countduplicate(num);
    
}

