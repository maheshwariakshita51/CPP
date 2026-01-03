#include<iostream>
#include <cmath>
using namespace std;

int main()
{
int n;
    cout<<"Enter n: ";
    cin>>n;
    if (n % 4 == 0 && n % 8 != 0)
        cout << "Divisible by 4 but not by 8";
    else
        cout << "Condition not satisfied";
}