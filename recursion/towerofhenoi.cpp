#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
void towerofhenoi(int n, char src, char dest, char helper){

    if(n==0)
        return;//base case

    towerofhenoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<< dest<<endl;
    towerofhenoi(n-1, helper, dest, src);



}
int main(){
    string str = "pippxxrtpigdpigtpi";
    towerofhenoi(3,'a','c','b');
    return 0;
}