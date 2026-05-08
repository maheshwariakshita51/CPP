// //maximum element in each row

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() 
// {
//     vector<vector<int>>v = {{3,6,4} , {7,8,9} , {5,2,1} };
//     vector<int>ans;
  
//     for(int i=0 ;i<3 ;i++){
//           int max = 0;
//         for(int j=0 ;j<3 ;j++)
//         {
//             if(v[i][j]>max)
//             {
//                 max=v[i][j];
//             }
//         }
//         ans.push_back(max);
//     }
//     for(auto it:ans)
//     {
//         cout<<it<<" ";
//     }
// }



//2 METHOD

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main() 
// {
//     vector<vector<int>>v = {{3,6,-4} , {7,8,-9} , {5,2,1} };
    
//     for(int i=0 ; i<3 ;i++)
//     {
//         int  max = 0;
//         for(int j=0 ;j<3;j++)
//         {
//             if(v[i][j] > max)
//             {
//                 max = v[i][j];
//             }
//         }
//         cout<<max;
//     }
    
// }