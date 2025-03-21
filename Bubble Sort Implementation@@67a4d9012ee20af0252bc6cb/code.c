#include <stdio.h>
int sort(int n);
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int sort(int n){
    bubbleSort(arr, n);
    printArray(arr, n);}
    return 0;
} 