// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;
    //defaul constructor
    student(){
        cout<<endl<<" this is default constructor";
    }
    //parameterised contructor
    student(string s, int a, bool g){
        cout<<endl<<" this is parameterize constructor";
        name= s;
        age = a;
        gender = g;
    }

    //copy constructor
    student(student &a){

        cout<<endl<<" this is copy constructor";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // destuctor: get automatically called when any object is destroyed: no parameter no return 
    ~student(){
        cout<<"\ndestructor\n";
    }

    void printIo(){
        cout<<"name: ";
        cout<<name;
        cout<<"Age: ";
        cout<<age;
        cout<<"gender: ";
        cout<<gender;
    }

    void setname(string s){
        name = s;
    }
    void getname(){
        cout<<name<<endl;
    }
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }

};

int main(){
    // student a;
    // a.name = "aanshi";
    // a.age =20;
    // a.gneder  =1;

    //arr of objects

    // student arr[3];

    // // for(int i = 0; i<3; i++){
    // //     string s;
    // //     cout<<"name: ";
    // //     cin>>s;
    // //     arr[i].setname(s);
    // //     cout<<"Age: ";
    // //     cin>>arr[i].age;
    // //     cout<<"gender: ";
    // //     cin>>arr[i].gender;
        
    // }
    // for(int i = 0; i<3; i++){
    //     arr[i].printIo();
    // }

    student a("aanshi", 19, 1);
    a.printIo();

    student b;//default

    student c = a;
    c.printIo();

    if(c == a)
        cout<<"\nsame";
    
    else
        cout<<"\nnot same";

    student d("sanchay", 15, 1);

    if(c == d)
        cout<<"\nsame";
    
    else
        cout<<"\nnot same";
    return 0;
}