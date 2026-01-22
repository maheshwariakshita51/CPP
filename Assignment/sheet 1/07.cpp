#include<iostream>
using namespace std;
#include<vector>
// No. of spaces in a sentence

// int  linearsearch(string str)
// {
//     int count=0;
//     for(auto it:str)
//     {
//         if(it==' ')
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     string str = "i love c language";
//     int ans = linearsearch(str);
//     cout<<"no. of spaces : "<<ans;
// }

//******************************************* 

//no. of words in a sentence

int linearsearch(string str)
{
    vector<string>word;
    string tempstr="";
    for (auto it:str)
    {
        if(it!=' ')
        {
            tempstr+=it;
        }
        else
        {
            if(tempstr!="")
            {
                word.push_back(tempstr);
            }
            tempstr="";
        }
    }
    if(tempstr!="")
     {
        word.push_back(tempstr);
     }
     return word.size();
}
int main()
{
    string str = "i love c language i iy i";
    int ans = linearsearch(str);
    cout<<ans;

}