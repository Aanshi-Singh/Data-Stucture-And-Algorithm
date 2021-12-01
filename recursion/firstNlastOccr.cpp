#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int firstoccurence(int arr[],int i, int n, int p){
    if(i==n){
        return -1;
    }
    if(arr[i]==p){
        return i;
    }
    else{
        firstoccurence(arr,i+1,n,p);
    }
}

int Lastoccurence(int arr[], int i, int n , int p){
    if(i==n){
        return -1;
    }
    int restarray = Lastoccurence(arr, i+1, n, p);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==p){
        return i;
    }
     return -1;
}

int main(){
    int n =8;
    int arr[8]={1,2,3,2,4,2,5,2};
    cout<<"First occurence: "<<firstoccurence(arr,0, n, 2)<<endl<<endl;
    cout<<"Last occurence: "<<Lastoccurence(arr,0, n, 2);

    return 0;
}