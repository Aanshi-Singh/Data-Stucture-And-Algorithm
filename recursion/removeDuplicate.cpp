#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
void remDup(string str){
    if(str.length() == 0)
        return;
    
    if(str[0]==str[1]){
        cout<<str[1];
        remDup(str.substr(2));
    }
    else{
        cout<<str[0];
        remDup(str.substr(1));}

}
int main(){
    string str = "aabbccddeeffgg";
    remDup(str);
    return 0;
}