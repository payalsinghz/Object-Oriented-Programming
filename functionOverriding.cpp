#include<iostream>
using namespace std;
class Parent{
public:
    void show(){
        cout<<"Parent class show\n";
    }

};
class Child{
public:
    void show(){
        cout<<"Child class show\n";
    }

};
int main(){
    Child c1;
    c1.show();
    return 0;
}