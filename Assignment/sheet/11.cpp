//remove duplicate
#include<iostream>
using namespace std;
#include<vector>
// bool linearsearch(string str,char ch)
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
// string removeduplicate(string str)
// {
//     string temp="";
//     for(auto it:str)
//     {
//         if(!linearsearch(temp,it))
//         {
//             temp+=it;
//         }
//     }
//     return temp;
// }
// int main()
// {
//     string str="aaabbbbbbbhhhhhhhddddgggggggegtt";
//     cout<<removeduplicate(str);
// }


//************************************* */

//count the unique character in string

// bool linearsearch(string str,char ch)
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
// int removeduplicate(string str)
// {
//     string temp="";
//     for(auto it:str)
//     {
//         if(!linearsearch(temp,it))
//         {
//             temp+=it;
//         }
//     }
//     return temp.length();
// }
// int main()
// {
//     string str="abbbbcccccdddddeeffghhhhhh";
//     cout<<removeduplicate(str);
// }


//****************************************** */
//FIND THE DUPLICATE ELEMNTS
// string findduplicate(string str)
// {
//     map<char,int>freqcount;
//     string temp="";
//     for(auto it:str)
//     {
//         freqcount[it]++;
//     }
//     for(auto it:freqcount)
//     {
//         if(it.second>=2)
//         {
//             temp+=it.first;
//         }
//     }
//     return temp;
// }
// int main()
// {
//     string str="abbbbbcccdesss";
//     cout<<findduplicate(str);
// }


// ***********************************************

//FIND THE COUNT OF TOTAL DUPLICATE ELEMENT
// #include<bits/stdc++.h>
// using namespace std;
// int findduplicate(string str)
// {
//     map<char,int>freqcount;
//     string temp="";
    
//     for(auto it:str)
//     {
//         freqcount[it]++;
//     }
//     for(auto it:freqcount)
//     {
//         if(it.second>=2)
//         {
//             temp+=it.first;
//         }
//     }
//     return temp.length();
// }
// int main()
// {
//     string str="abbbbbcccdesss";
//     cout<<findduplicate(str);
// }

// ******************************************