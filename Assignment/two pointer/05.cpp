// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;
// vector<int> twosum(vector<int>&arr , int target)
// {
//     map<int,int>mp;
//     for(int i=0 ; i<arr.size() ; i++)
//     {
//         int need = target-arr[i];
//         if(mp.count(need))
//         {
//             return {mp[need] ,i};
//         }
//         mp[arr[i]]=i;
//     }
//     return {-1,-1};
// }
// int main()
// {
//     vector<int>arr={1,3,16,15,7,19,2};
//     vector<int>ans =twosum(arr,9);
//     cout<<ans[0]<<" "<<ans[1];
// }