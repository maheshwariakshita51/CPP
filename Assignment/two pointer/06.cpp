// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;
// bool isPalindrome(string s)
// {
//      int i=0 , j=s.size();
//     while(i<j)
//     {
//         while(i<j && !isalnum(s[i]))
//         {
//             i++;
//         }
//         while(i<j && !isalnum(s[j]))
//         {
//             j--;
//         }
//         if(_tolower(s[i]) != _tolower(s[j]))
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
// int main()
// {
//        string s="A man, a plan, a canal: Panama";
//        cout<<isPalindrome(s);
// }