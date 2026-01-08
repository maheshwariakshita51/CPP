#include<iostream>
using namespace std;


//count 
// int linearsearch(string str,char ch)
// {
//     int count=0;
//     for(int i=0 ; i<str.length() ; i++)
//     {
//         if(str[i]==ch)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     string str ="elephantttt";
//     char ch ='t';
//     int index = linearsearch(str,ch);
//     cout<<"times of char appear: : "<<index;
// }

//last index
int linearsearch(string str,char ch)
{
    int index=-1;
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i]==ch)
        {
            index=i;
        }
    }
    return index;
}
int main()
{
    string str ="developer";
    char ch ='e';
    int index = linearsearch(str,ch);
    cout<<"index value is : "<<index;
}



//first INDEX
// int linearsearch(string str,char ch)
// {
//     for(int i=0 ; i<str.length() ; i++)
//     {
//         if(str[i]==ch)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     string str ="elephant";
//     char ch ='a';
//     int index = linearsearch(str,ch);
//     cout<<"index value is : "<<index;
// }