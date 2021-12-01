#include <iostream>  
using namespace std;  
int main()  
{  

    int lengthOfArray;
	cin>>lengthOfArray;
    int arr[lengthOfArray];
    
    for(int i = 1; i<=lengthOfArray; i++){
        cin>>arr[i];
    }
    //factors
    for(int i = 1; i<=arr[i]; i++){
        int arr2[arr[0]];
        
      if (arr[i] % i == 0){
            arr2[i] = i;}

        if(arr2[arr[i]]<10){
            cout<<arr2[i]*10+arr2[arr[i]-i];
        }
        }
   }

