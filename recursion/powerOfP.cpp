#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
    
}
int main(){
    int p,n;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}