#include <iostream>
using namespace std;

int findPeak(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] < arr[mid + 1]) left = mid + 1;
        else right = mid;
    }
    return left;
}

int binarySearchAsc(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int binarySearchDesc(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int searchBitonicArr(int arr[], int n, int target) {
    int peak = findPeak(arr, n);

    int index = binarySearchAsc(arr, 0, peak, target);
    if (index != -1) return index;

    
    else return binarySearchDesc(arr, peak + 1, n - 1, target);
}

int main() {
    int arr[] = {1, 3, 8, 12, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int target = 4;

    int index = searchBitonicArr(arr, n, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}