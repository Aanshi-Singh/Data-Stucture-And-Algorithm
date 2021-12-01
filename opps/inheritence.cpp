// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class one{
    public:
    void funcOne(){
        cout<<"First class";
    }
    private:
         int aanshi;
};

class two :{
    public:
    void funcTwo(){
        cout<<"Second class";
    }

    
};

class three :  public two, public one{
    public:
    void funcThree(){
        cout<<"Third class";
    }
};

int main(){
    three three_obj;
    three_obj.funcTwo();
    return 0;
}