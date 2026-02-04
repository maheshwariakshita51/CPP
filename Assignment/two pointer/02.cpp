#include<bits/stdc++.h>
using namespace std;
vector<int> mergesortedarray(vector<int>arr1,vector<int>arr2 , int n,int m)
{
    int i=m-1,
        j=n-1,
        k=m+n-1;

    while(i>=0 && j>=0)
    {
        if(arr1[i]>=arr2[j])
            arr1[k--]=arr1[i--];
        else
            arr1[k--]=arr2[j--];
    }
    //i exhaust and j exist
    while(i>=0 )
    {
        arr1[k--]=arr1[i--];
    }
    while(j>=0)
    {
        arr1[k--]=arr2[j--];
    }
    return arr1;
}
int main()
{
    vector<int>arr1={4,5,6,0,0,0};
    vector<int>arr2={1,2,3};
    int m=3,n=3;
    
    
    vector<int>ans = mergesortedarray(arr1,arr2,n,m);
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