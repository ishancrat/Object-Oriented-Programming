#include <iostream>
using namespace std;

int partitioning(int arr[], int start, int end){
    //let the last element be the pivot
    int pivotElement=arr[end];
    int largePtr=start-1;

    for (int smallPtr=start;smallPtr<end;smallPtr++){
    	if (arr[smallPtr]<pivotElement){
    		largePtr++;
    		swap(arr[largePtr],arr[smallPtr]);
    	}
    }

    swap(arr[largePtr+1],arr[end]);

    return (largePtr+1);
}

void quickSort(int arr[],int start, int end){
    if (start<end){
        int partitionIndex=partitioning(arr,start,end);
        quickSort(arr,start,partitionIndex-1);
        quickSort(arr,partitionIndex+1,end); //don't involve the placed pivot element in successive swaps
    }
}

int main(){

    int arr[]={10, 7, 8, 9, 1, 5 ,8};
    int N = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr,0,N-1);

    cout<<"array elements are: ";

    for (int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
