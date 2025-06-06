#include <iostream>
using namespace std;

int searchInsert(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    if (target == 0) return 0;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) return mid;

        if (arr[mid] < target) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans + 1;
}

int main(){

    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int target = 7;

    cout << searchInsert(arr, n, target) << endl;

    return 0;

}