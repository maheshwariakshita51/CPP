#include<iostream>
#include<vector>
using namespace std;
void move(string &nums)
{
    int i=0;
    for(int j=0;j<nums.length();j++)
    {
        if(nums[j]!='a')
        {
        swap(nums[i],nums[j]);
        i++;
        }
    }
}
int main()
{
    string nums = "aabcccccccccdeaaaabsdj";
    move(nums);
    cout<<nums;
}
