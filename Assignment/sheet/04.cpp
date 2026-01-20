//by vector 
#include<iostream>
#include<vector>
using namespace std;
void printarr(vector<int>arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
vector<int> linearsearch(string str,char ch)
{
    vector<int> logindex;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
        {
            logindex.push_back(i);
        }
    }
    return logindex;

}
int main()
{
    string str="elephante";
    char ch='e';
    vector<int>logindex = linearsearch(str,ch);
    printarr(logindex);
}



//BY STRING
// string linearsearch(string str,char ch)
// {
//     string logindex;
//     for(int i=0 ; i<str.length() ; i++)
//     {
//         if(str[i]==ch)
//         {
//             logindex += to_string(i);
//         }
//     }
//     return logindex;
// }
// int main()
// {
//     string str = "elephante";
//     char ch= 'e';
//     string ans = linearsearch(str,ch);
//     cout<<ans;
// }
