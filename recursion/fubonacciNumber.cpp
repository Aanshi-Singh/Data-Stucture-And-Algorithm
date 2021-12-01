#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int fibonacci(int n){
    // fib(n) = fib(n-1) +fib(n-2)
    //fib(0) = 0, fib(1) =1
    
    if(n==0)// iteration starts from 0
        return 0;
    else if(n==1)
        return 1;
    int prevfib = fibonacci(n-1)+ fibonacci(n-2);
    return prevfib;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}