#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for ( int i = 0; i< n-1; i++){
        for( int j =0; j<n-i-1; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);

            }
        }
    }
}

void printSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << " ";  
    }
    cout << endl;  
}

int main(){
    int n=5;
    int arr[] ={4,2,5,1,3};
    bubbleSort(arr, n);
    printSort(arr, n);
    return 0;
}