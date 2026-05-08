#include<iostream>
using namespace std;

class teachers {
    public:
    string name;
    string dept;
    
    void print(){
        cout<<name<<endl;
        cout<<dept<<endl;
    }
};

int main(){
    teachers t1;
    t1.name = "akshita";
    t1.dept = "cs";
    t1.print();
    teachers t2;
    t2.name = "anjali";
    t2.dept = "ec";
    t2.print();
}