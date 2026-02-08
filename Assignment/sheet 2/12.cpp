// Remove Duplicates from Array
#include<iostream>
using namespace std;
#include<vector>
#include<map>
vector<int> printvar(vector<int>ans)
{
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
bool linearsearch(vector<int>arr,int x)
{
    for(auto it:arr)
    {
        if(it==x)
        {
            return true;
        }
    }
    return false;
}
vector<int> removeduplicate(vector<int>arr)
{
    vector<int>temp;
    for(auto it:arr)
    {
        if(!linearsearch(temp,it))
        {
            temp.push_back(it);
        }
    }
    return temp;
}
int main()
{
    vector<int>arr ={1,1,2,4,5,4,5,47,5,7,5,8,9,9};
    vector<int>ans = removeduplicate(arr);
    printvar(ans);
}



