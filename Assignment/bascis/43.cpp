#include<iostream>
#include <cmath>
using namespace std;
int main()
{
   int a, b;
   cin >> a >> b;
   int diff = a - b;
   diff = abs(diff);   // convert negative to positive
   cout << diff;
}