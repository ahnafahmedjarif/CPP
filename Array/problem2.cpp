// WAF to swap the max & min number of an array

#include <iostream>
#include <utility>
using namespace std;

void swapMinAndMax(int arr[], int size) {

    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }

        if (arr[i] > arr[maxIndex]) {
            maxIndex = arr[i];      
        }
    }

    std::swap(arr[minIndex], arr[maxIndex]);
}
    
int main () {
    int arr[] = {3, 5, 2, 7, 5, 9};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before Swap: ";
    for (int i = 0 ; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapMinAndMax(arr, size);

    cout << "After swap: ";
    for (int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}