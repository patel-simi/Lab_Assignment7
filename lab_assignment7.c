#include <stdio.h>
#include <stdlib.h>

void swap (int *pa, int *pb) {
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
}

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    printf("Using Bubble Sort \n\n");
    int i,j,temp;
    for (i=0;i<n-1;i++){
        printf("Iteration #%d\n", i+1);
        int swaps=0;
        for (j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swaps+=1;
            }
            printArray(arr,n);
        }
        printf("The number of swaps in iteration #%d is %d.\n",i+1,swaps);
    }
}

int main(){
    int arr[]={97,16,45,63,13,22,7,58,72};
    int n=9;
    printf("The array looks like this to begin with:\n");
    printArray(arr,n);

    bubbleSort(arr,n);
    printf("After the BubbleSort, the array looks like this: \n");
    printArray(arr,n);
    return 0;
}