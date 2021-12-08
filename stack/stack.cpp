#include<iostream>
using namespace std;
#define n 100
class stack{
    int * arr; // dynamic
    int top;
    public:
    stack(){
        arr = new int [n];
        top = -1;
    }
 
    void push(int val){
        if(top == n-1){
            cout<<"overloaded"<<endl;
            return;
        }
        top++;
        arr[top] = val;
        return;
    }
    void pop(){
        if(top == -1){
            cout<<"underloaded"<<endl;
            return;
        }
        top -- ;
        return;
    }
 
    int top_of_stack(){
        if(top == -1){
            cout<<"underloaded"<<endl;
            return 0;
        }
        return arr[top];
    }
 
    bool empty(){
        return top == -1;
    }
 
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top_of_stack()<<endl;
    st.pop();
    cout<<st.top_of_stack()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}
