#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int sum(int n){
    //rokne ke liye
    if(n==0)
        return 0;
    int prevSum = sum(n-1);//yeh n-1 tak ka sum dega
    return n + prevSum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}