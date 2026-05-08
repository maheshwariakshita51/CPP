//how many vowel present in a string

#include<iostream>
using namespace std;
int main()
{
    string s= "orange";
    
    int count =0;
    for(auto x:s)
    {
        if(x=='a' || x=='e' ||  x=='i' || x=='o' || x=='u' )
        count++;
    }
    cout<<count;
}