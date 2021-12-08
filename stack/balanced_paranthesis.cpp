#include<iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
using namespace std;

bool isvalid(string s){
    int lengthOfString = s.length();
    stack<char> st;
    bool ans = true;
    for(int i = 0; i<lengthOfString;i++){
        if(s[i] == '(' || s[i] == '{'|| s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
        else if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty())
        return false;
    else 
    return ans;
}

int main(){
    cout<<isvalid("{()}");
    return 0;
}