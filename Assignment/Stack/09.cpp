// // Print largest value in vector using stack

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int max=INT_MIN;
//     stack<int>s;
//     vector<int>v={-11,-22,-33,-66,44,-55};
//     for(auto x:v)
//     {
//         if(x>max)
//         {
//             max=x;
            
//         }
//         s.push(max);
//     }

//     while(!s.empty())
//     {
//         cout<<s.top()<<" ";
//         break;
//     }
// }