#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    int prevFact = factorial(n-1);
    return n*prevFact;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}