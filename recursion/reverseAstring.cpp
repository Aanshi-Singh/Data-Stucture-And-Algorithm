#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

void rev(string str){
    if(str.length()==0){//base condition
        return;
    }
    rev(str.substr(1));//substr(1): 1 se aage string
    cout<<str[0];
}
int main(){
    string str = "binod";
    rev(str);
    return 0;
}