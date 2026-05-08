//count digit in a string 

#include<iostream>
using namespace std;
int main()
{
    string s= "1@ageyu345";
    int count=0;
    for(int i=0 ;i<s.size() ; i++)
    {
        if(s[i] >= '0' && s[i]<='9')
        {
            count++;
        }
    }
    cout<<count;
}