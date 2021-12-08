#include<iostream>
#include <string>
#include <stack>
using namespace std;
void reverseASentence(string str){
        stack<string> s;

        for(int i = 0; i<str.length();i++){
            string word = "";
            while(str[i]!= ' ' && i<str.length() ){
                word += str[i];
                i++;
            }
            s.push(word);
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }cout<<endl;
}


int main(){

    string str = "Hey, how are you?";
    reverseASentence(str);
    return 0;
}