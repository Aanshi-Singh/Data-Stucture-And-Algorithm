#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n;
    dec(n-1);   
}
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n;
    
}
int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    cout<<endl;
    inc(n);
    return 0;
}