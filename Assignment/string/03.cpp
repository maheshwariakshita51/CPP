// check string is pallidrome or not

#include<iostream>
using namespace std;
int main()
{
    string s="ayya";
    int i=0 , j=s.size()-1;
    while(i<j)
    {
        if(s[i] != s[j]){
            cout<<" not pallindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"pallindrome"; 
}