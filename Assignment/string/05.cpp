//how many vowel and consonent present in a string

#include<iostream>
using namespace std;
int main()
{
    string s="orange";
    int vowel=0;
    int consonent =0;
    for(auto x:s)
    {
        if(x=='a' || x=='e' ||  x=='i' || x=='o' || x=='u')
        {
            vowel++;
        }
        else
        {
            consonent++;
        }
    }
    cout<<"vowel : "<<vowel<<endl;
    cout<<"consonent : "<<consonent;
}