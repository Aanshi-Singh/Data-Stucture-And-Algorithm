// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class first{
    public:
    void function(){
        cout<<"first function";}
    
    void function(int x){
        cout<<"second function";
    }
    void function(double x){
        cout<<"third function";
    }};
   

int main(){
    first obj;
    obj.function();
    obj.function(2);
    obj.function(2.3);

    return 0;
}