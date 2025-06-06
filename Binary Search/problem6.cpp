#include <iostream>
using namespace std;

int findCeiling(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return ans;
}

int findFloor(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        } 
        else if (arr[mid] < target){
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return ans;
}


int main() {
    int arr[] = {1, 2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(int);
    int target = 5;

    cout << findCeiling(arr, n, target) << endl;
    cout << findFloor(arr, n, target) << endl;

    return 0;
}