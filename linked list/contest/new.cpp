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
    
    for(int j = 1; j<= lengthOfArray; j++){
    for(int i = 1; i<= arr[j]; i++){
        int arr3[arr[j]];
        if(arr[j]%i == 0){
            arr3[i] = i;
            cout<<arr3[i];
        }}
    }

    

    return 0;
}

