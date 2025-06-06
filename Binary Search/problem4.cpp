#include <iostream>
using namespace std;

int searchRotatedArray(int arr[], int n, int target){
    int left = 0, right = n - 1;

    while (left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;

        if (arr[left] <= arr[mid]) {
            if (arr[left] <= target && arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        else {
            if (arr[mid] < target && arr[right] >= target) {
                left = mid + 1; 
            } 
            else right = mid - 1;
        }

    }

    return -1;

}

int main(){
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    int target = 0;
    cout << searchRotatedArray(arr, n, target) << endl;

    return 0;
}