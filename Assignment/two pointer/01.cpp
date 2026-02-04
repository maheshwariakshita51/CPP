#include<bits/stdc++.h>
using namespace std;

vector<int> mergesortedarray(vector<int>arr1,vector<int>arr2)
{
    if(arr1.size()==0 && arr2.size()==0)
        return{};
        
    int m = arr1.size();
    int n = arr2.size();
    int i=0,j=0,k=0;
    vector<int>res(m+n);
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
            res[k++]=arr1[i++];
        else
            res[k++]=arr2[j++];
    }
    //i exhaust and j exist
    while(i<m )
    {
        res[k++]=arr1[i++];
    }
    while(j<n)
    {
        res[k++]=arr2[j++];
    }
    return res;
}
int main()
{
    vector<int>arr1={1,2,2,4,5,5};
    vector<int>arr2={3,6,7,7,8,8,9};
    vector<int>ans = mergesortedarray(arr1,arr2);
    if(ans.size()==0)
    {
        
        cout<<"no elements";
    }
    else
    {
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
    }
}