// #include<bits/stdc++.h>
// using namespace std;
// vector<int> squaresorted(vector<int>& num)
// {
//         int i=0 ,
//         j=num.size()-1,
//         k=j;
//         vector<int>res(num.size());
        
//         while(i<=j)
//         {
//         int isquare = num[i]*num[i];
//         int jsquare = num[j]*num[j];
        
//         if(isquare<=jsquare)
//         {
//             res[k]=jsquare;
//             j--;
//             k--;
//         }
//         else
//         {
//             res[k]=isquare;
//             i++;
//             k--;
//         }
//         }
//         return res;
// }
// int main()
// {
//      vector<int> num = {-4,-1,0,3,10};
//      vector<int> ans = squaresorted(num);
//      for(auto it:ans)
//      {
//          cout<<it<<" ";
//      }
     
// }