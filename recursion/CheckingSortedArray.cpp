#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
bool sortedArray(int n, int arr[])
{
    if(n==0){
        return true;
    }
   bool restarray = sortedArray(n-1, arr+1);// pointer ek step aage point karega
//    if(arr[0]<arr[1] && restarray) return true
       return (arr[0]<arr[1] && restarray);
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortedArray(n, arr);
    return 0;
}