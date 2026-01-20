//by vector 
#include<iostream>
using namespace std;
#include<vector>
void printvector(vector<int>ans)
{
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
vector<int> linearsearch(string str,char ch)
{
    vector<int>indexvalue;
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i]==ch)
        {
            indexvalue.push_back(i);
        }
    }
    return indexvalue; 
}
int main()
{
    string str="eleeepheeanteee";
    char ch ='e';
    vector<int>ans = linearsearch(str,ch);
    printvector(ans);
}
