#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void countSort(int arr[], int n){
    int maximum = arr[0];
    for(int i = 0; i<n; i++){
        maximum = max(maximum, arr[i]);
    }
    int count[10] = {0};
    for(int i = 0; i< n ; i++){
        count[arr[i]]++;
    }
    for(int i = 1; i<=maximum; i++){
        count[i]+= count[i-1];
            }

    int output[n];
    for(int i = n-1; i>= 0 ; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i = 0; i< n ; i++){
        arr[i] = output[i];
    }
}



int main(){
    int arr[] = {6,5,4,3,2,1};
    int n = 6;
    countSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}