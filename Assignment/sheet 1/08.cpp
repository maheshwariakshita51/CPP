//FREQUENCY COUNT bY MAP
#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<map>
map<char,int> looptracing (string str)
{
    map<char,int>freqcount;
    for(int i=0 ; i<str.length() ; i++)
    {
       freqcount[str[i]]++;
    }
    return freqcount;
}
int main()
{
    string str = "aakshhitttaa";
    map<char,int>ans = looptracing(str);
    for(auto it:ans)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }
}


//************************************** */

// REMOVE DUPLICATE BY SORTING BY STRING

// string looptracing(string str)
// {
//     map<char,int>freqcount;
//     string ans="";
//     for(int i =0 ; i<str.length() ; i++)
//     {
//         freqcount[str[i]]++;
//     }
//     for(auto it:freqcount)
//     {
//         ans+=it.first;
//     }
//     return ans;
// }
// int main()
// {
//     string str = "akshhittttttaaa";
//     cout<<looptracing(str);
// }


//******************************************** */
//BY VECTOR

// map<int,int> looptracing(vector<int> num)
// {
//     map<int,int> freqcount;
//     for(int i=0 ; i<num.size();i++)
//     {
//         freqcount[num[i]]++;
//     }
//     return freqcount;
// }
// int main()
// {
//     vector<int>num = {1,1,1,3,3,3,5,5,5,53,3,3,7,7,6,8,8};
//     map<int,int>ans = looptracing(num);
//     for(auto it:ans)
//     {
//         cout<<it.first<<" : "<<it.second<<"\n";
//     }
// }