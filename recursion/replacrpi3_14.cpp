#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
void replace(string str){
    if(str.length()==0){//base case
        return ;
    }
    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        replace(str.substr(2));
    }
    else{
        cout<<str[0];
        replace(str.substr(1));
    }
}

int main(){
    string str = "pippxxrtpigdpigtpi";
    replace(str);
    return 0;
}