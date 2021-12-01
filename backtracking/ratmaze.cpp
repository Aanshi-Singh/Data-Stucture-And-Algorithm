#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratmaze(int** arr, int x, int y, int** solArr, int n){
//base case
    if((x==(n-1)) && (y ==(n-1))){
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr, x, y, n)){
        solArr[x][y]=1;
        if(ratmaze(arr, x+1,y,solArr,n)){
            return true;
        }
        if(ratmaze(arr, x, y+1, solArr,n)){
            return true;
        }
        solArr[x][y]=0;//backtrack
        return false;
    }
    return false;
}
    int main(){
        // dynamically allocating the array
        int n;
        cin>>n;
        int** arr = new int*[n];
        for(int i=0; i<n;i++){
            arr[i] = new int [n];
        }
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                cin>>arr[i][j];
                // cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
        }

        // intialinsing solution array with 0

        int** solArr = new int*[n];
        for(int i=0; i<n;i++){
            solArr[i] = new int[n];
            for(int j=0; j<n;j++){
               solArr[i][j]=0;
        }
        }

    if(ratmaze(arr, 0,0, solArr, n)){
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
        }
    }
       
    
    return 0;
}