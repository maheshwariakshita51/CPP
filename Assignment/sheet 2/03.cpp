//First Index of an Element 
#include<iostream>
using namespace std;
#include<vector>
#include<map>
int firstIndex(vector<int> arr, int n)
{
    for(int i=0 ;i<arr.size();i++)
    {
        if(n==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr = {1,2,3,4,4,4,4,4,5,5,5,5,53,3,3};
    int n=53;
    cout<<firstIndex(arr,n);
}
