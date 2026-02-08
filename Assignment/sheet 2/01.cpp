// Count Occurrence of an Element 
#include<iostream>
using namespace std;
#include<vector>
#include<map>
int countOccurrence(vector<int> arr, int n)
{
    int count=0;
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(n==arr[i])
        {
            count++;
        }
    }
    return(count<0)?-1:count;
}
int main()
{
    vector<int>arr = {1,2,3,4,4,4,4,4,5,5,5,5,53,3,3};
    int n = 8;
    cout<<countOccurrence(arr,n);

}
