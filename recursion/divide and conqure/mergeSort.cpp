#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2= r-mid;
    int a1[n1];
    int b1[n2];
        
    for(int i=0; i<n1; i++){
        a1[i]=arr[l+i];
    }
    for(int j = 0; j<n2; j++){
        b1[j]=arr[mid+j+1];
    }

    int i=0, j=0, k=l;
    while(i<n1&&j<n2){
        if(a1[i]<b1[j]){
            arr[k]=a1[i];
            k++; i++;
        }
        else{
        arr[k]=b1[j];
            k++; j++;}
    }

    while (i<n1){
        arr[k]=a1[i];
            k++; i++;
    }
    while (j<n2){
        arr[k]=b1[j];
            k++; j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}


int main(){
int arr[] = {4,5,3,2,1};
mergeSort(arr, 0, 4);
for(int i= 0; i<5; i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}