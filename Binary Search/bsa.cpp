#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;

}

int main(){

    int arr[] = {2, 4, 10, 23, 35, 40};
    int n = sizeof(arr) / sizeof(int);
    int target = 23;

    cout << binarySearch(arr, n, target) << endl;

    return 0;

}