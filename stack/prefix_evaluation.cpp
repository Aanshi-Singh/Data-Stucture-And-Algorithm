#include<iostream>
#include <string>
#include <stack>
#include <math.h>
using namespace std;

int prefix(string str){
    stack<int> st;
    for(int i = str.length(); i>=0; i--){
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch(str[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;

            }

        }
    }
    return st.top();
}

int main(){

    string s = "-+7*45+20";
    cout<<prefix(s);
    return 0;
}