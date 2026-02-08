//Largest Element Using Linear Search 
#include<iostream>
using namespace std;
#include<vector>
#include<map>
int findLargest(vector<int> arr)
{
    int max=0;
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    vector<int> arr = {1,4,74,88,98,55,66,450};
    cout<<findLargest(arr);
}
