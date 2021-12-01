// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class base{
    public:
    virtual void printl(){
        cout<<"this is base class's print function";
    }
    void display(){
        cout<<"this is base display's print function";
    }
};

class child: public base{
    public:
    void printl(){
        cout<<"this is child class's print function";
    }
    void display(){
        cout<<"this is child display's print function";
    }
};

int main(){
    base *baseprt;
    child kid;
    baseprt = &kid;

    baseprt -> printl();
    cout<<endl;
    baseprt -> display();
    return 0;
}