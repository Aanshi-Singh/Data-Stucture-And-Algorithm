#include<iostream>
using namespace std;
int main(){
    int lengthOfArray;
    cin>>lengthOfArray;
    int arr[lengthOfArray];
    for(int i = 0 ; i<lengthOfArray; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i< lengthOfArray/2; i++){
        int temp = arr[i];
        arr[i] = arr[lengthOfArray-i-1];
        arr[lengthOfArray-i-1] = temp;
    }
    for(int i = 0 ; i<lengthOfArray; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
<<<<<<< HEAD
}

/*
output
4
1 2 3 4

4 3 2 1
*/
=======
}
>>>>>>> dev
