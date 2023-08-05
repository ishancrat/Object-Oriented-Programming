#include <iostream>
using namespace std;



void merge(int sortIt[],int start,int mid,int end) {

   int n1 = mid - start + 1;
   int n2 = end - mid;

   int* L = new int[n1];
   int* M = new int[n2];
    

    for (int i = 0; i < n1; i++) {
        L[i] = sortIt[start + i];
    }

    for (int j = 0; j < n2; j++) {
        M[j] = sortIt[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < n1 && j < n2) {
        if (L[i] < M[j]) {
            sortIt[k] = L[i];
            i++;
        }
        else {
            sortIt[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        sortIt[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        sortIt[k] = M[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] M;

    return;
}

void mergeSort(int sortIt[], int start, int end) {
    if (start >= end)
        return;

    int mid = (start+end) / 2;
    mergeSort(sortIt, start, mid);
    mergeSort(sortIt, mid + 1, end);
    merge(sortIt, start, mid, end);

}


int main(){

    int sortIt[7] = { 5,2,6,9,4,5,7 };
    int N=sizeof(arr)/sizeof(arr[0]);
    mergeSort(sortIt, 0, N-1);  

    cout << endl;
    cout << "sorted elements are: ";

    for (int i = 0; i < N; i++) {
        cout << sortIt[i] << " ";

    }
    return 0;
}


