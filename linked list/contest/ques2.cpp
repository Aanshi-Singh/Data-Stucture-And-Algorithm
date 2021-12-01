#include <bits/stdc++.h> // header file includes every Standard library

using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i= l-1;
    for(int j = l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;

}

void quickSort(int arr[], int l, int r){
    if(l<r){
        
    int pi = partition(arr, l, r);

    quickSort(arr, l, pi-1);
    quickSort(arr, pi+1, r);
    }
}

int max_difference(int arr[], int lengthOfArray){
    
    quickSort(arr, 0, lengthOfArray);
    
    int firstHalfSum = 0;
    int count = 0;
    for(int i = 1; i<lengthOfArray; i++){
        if(arr[i] == arr[i-1]){
            count+=1;
        }
    }
    if(count == lengthOfArray){
        return 0;
    }

    for(int i = 0; i<lengthOfArray/2; i++){
        firstHalfSum = firstHalfSum+arr[i];
    }
    int secondHalfSum = 0;
    for(int i=lengthOfArray/2; i<lengthOfArray; i++){
        secondHalfSum = secondHalfSum+arr[i];
    }
    return secondHalfSum-firstHalfSum;
}

int main() {
    int lengthOfArray;
	cin>>lengthOfArray;
    int arr[lengthOfArray];
    for(int i = 0; i<lengthOfArray; i++){
        cin>>arr[i];
    }
    

    cout<<max_difference(arr, lengthOfArray);
    
}

