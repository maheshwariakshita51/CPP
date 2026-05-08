//  //reverse a number using stack 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
   
//     int n=1234;
//     int rev =0;
//     stack<int>s;
//     while(n>0)
//     {
//         rev = rev*10+(n%10);
//         n=n/10;
//     }
//     while(rev>0)
//     {
//         s.push(rev%10);
//         rev=rev/10;
//     }
//     while(!s.empty())
//     {
//         cout<<s.top();
//         s.pop();
//     }

// }