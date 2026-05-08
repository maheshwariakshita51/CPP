#include<iostream>
using namespace std;
#include<vector>
#include<map>
string findduplicate(string str)
{
    string temp="";
    map<char,int>frqc;
    for(auto it:str)
    {
        frqc[str[it]]++;
    }
    for(auto it:frqc)
    {
        if(it.second>=2)
        {
            temp+=it.first;
        }
    }
    return temp;
}
int main()
{
    string str="aabbhiiiiasdff";
    cout<< findduplicate(str);
}




// bool linearsearch(string str , char ch)
// {
//     for(auto it:str)
//     {
//         if(it==ch)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// char removeduplicate(string str)
// {
//     string tempstr="";
//     for(auto it:str)
//     {
//         if(!linearsearch(tempstr,it))
//         {
//             tempstr+=it;
//         }
//         else{
//             return it;
//         }
//     }
//     return '*';
// }
// int main()
// {
//     string str="addhhsdfghii";
//     cout<<removeduplicate(str);
// }






// map<char,vector<int>> grading(vector<int>marks)
// {
//     map<char,vector<int>> mc;
//     for(auto it:marks)
//     {
//         if(it>=90)
//         {
//             mc['a'].push_back(it);
//         }
//         else if(it>=80 && it<90)
//         {
//             mc['b'].push_back(it);
//         }
//         else if(it>=70 && it<80)
//         {
//             mc['c'].push_back(it);
//         }
//         else if(it>=60 && it<70)
//         {
//             mc['d'].push_back(it);
//         }
//         else
//         {
//             mc['f'].push_back(it);
//         }
//     }
//     return mc;
// }
// int main()
// {
//     vector<int>marks = {45,88,78,98,68,75,48,99,88,77,66,50};
//     map<char,vector<int>> ans = grading(marks);
//     for(auto it:ans)
//     {
//         cout<<it.first<<" : ";
//         for(auto v:it.second)
//         {
//             cout<<v<<" ";
//         }
//         cout<<"\n";
//     }
// }