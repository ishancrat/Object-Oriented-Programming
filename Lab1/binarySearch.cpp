#include <iostream>
using namespace std;


int binarySearch(int arr[], int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target) {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return -1;
}


int main()
{
    cout << "Hello World!\n";
    int arr[7] = { 3,4,5,6,7,8,9 };
    int N=sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int result = binarySearch(arr, 0, N-1, 8);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at location " << result;

    return 0;
}


