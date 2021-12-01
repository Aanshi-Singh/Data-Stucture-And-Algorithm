// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class complex{
    private :
     int real, imaginary;
    public:
    complex(int r = 0, int i = 0){
        real = r;
        imaginary = i;
    }
    complex operator + (complex const &obj){
        complex res;
        res.imaginary = imaginary + obj.imaginary;
        res.real = real+ obj.real;
        return res;
    }
    void display(){
    cout<<real<<" +i"<<imaginary;}
};
int main(){
    complex obj(2,5), obj2(3,4);
    complex c2 = obj+obj2;
    c2.display();
    return 0;
}