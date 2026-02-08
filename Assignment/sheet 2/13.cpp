//  Check if Array is Sorted 
#include<iostream>
using namespace std;
#include<vector>
#include<map>
bool issorted(vector<int>arr)
{
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i]>arr[i+1])
        return false;
    }
    return true;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    cout<<issorted(arr);
}
