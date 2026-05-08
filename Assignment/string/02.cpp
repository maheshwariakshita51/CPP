//REVERSE A STRING 

#include<iostream>
using namespace std;
int main()
{
    string s="apple";
    int i=0,j=s.size()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;


    // reverse(s.begin(),s.end());
    // cout<<s;
}
