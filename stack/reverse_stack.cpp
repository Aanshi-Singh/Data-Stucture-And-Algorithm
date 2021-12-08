#include<iostream>
#include <string>
#include <stack>
using namespace std;

void insertatbottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    
    int topele = st.top();
    st.pop();
    insertatbottom(st, ele);
    st.push(topele);

}

void reverseAStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverseAStack(st);
    insertatbottom(st, ele);

}

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverseAStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    string string_data = "absfg";
    cout<<endl<<string_data[3]+'0'-string_data[3];

    return 0;


}