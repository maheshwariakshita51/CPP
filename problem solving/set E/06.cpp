#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter operator (+,-,/,*) =  ";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<"result = "<<a+b;
            break;

        case '-':
            cout<<"result = "<<a-b;
            break;

        case '*':
            cout<<"result = "<<a*b;
            break;
        
        case '/':
            if(b !=0)
                cout<<"result = "<<a/b;
            else
                cout<<"division by zero not possible";
            break;
        
            default:
            cout<<"invalid operator";
    }
}