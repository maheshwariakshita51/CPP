//marks by maping
#include<bits/stdc++.h>
using namespace std;

map<char,int> freqcount(vector<int>marks)
{
    map<char,int> markscount;
    for (auto it:marks)
    {
        if(it>=90)
        {
            markscount['A']++;
        }
        else if(it>=80 && it<90)
        {
            markscount['B']++;
        }
        else if(it>=70 && it<80)
        {
            markscount['C']++;
        }
         else if(it>=60 && it<70)
        {
            markscount['D']++;
        }
         else if(it>=50 && it<60)
        {
            markscount['E']++;
        }
        else
        {
            markscount['f']++;
        }
    }
    return markscount;
}
int main()
{
    vector<int>marks = {77,7,866,51,45,91,98,90,87,33,45};
    map<char,int>ans = freqcount(marks);
    for(auto it:ans)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }
}


// *************************************

#include<bits/stdc++.h>
using namespace std;
map<char,vector<int>> freqcount(vector<int>marks)
{
    map<char,vector<int>> markscount;
    for (auto it:marks)
    {
        if(it>=90)
        {
            markscount['A'].push_back(it);
        }
        else if(it>=80 && it<90)
        {
            markscount['B'].push_back(it);
        }
        else if(it>=70 && it<80)
        {
            markscount['C'].push_back(it);
        }
         else if(it>=60 && it<70)
        {
            markscount['D'].push_back(it);
        }
         else if(it>=50 && it<60)
        {
            markscount['E'].push_back(it);
        }
        else
        {
            markscount['f'].push_back(it);
        }
    }
    return markscount;
}
int main()
{
    vector<int>marks = {77,7,866,51,45,91,98,90,87,33,45};
    map<char,vector<int>>ans = freqcount(marks);
    for(auto it:ans)
    {
        cout<<it.first<<" : ";
        for(auto v:it.second)
        {
            cout<<v<<" ";
        }
        cout<<"\n";
    }
}