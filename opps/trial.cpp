// g++ classInit.cpp -o classinit

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int arr[]  = {1,2,3,4,5};
    int maximum = arr[0];
    for(int i = 0; i < 5; i++){
        maximum = max(maximum, arr[i]);
    }
    int count[maximum] = {0};
for(int i = 0; i < 5; i++){
        cout<<count[i]<<" ";
    
    }
    return 0;
}