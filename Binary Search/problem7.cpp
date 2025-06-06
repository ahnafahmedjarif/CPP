#include <iostream>
using namespace std;

bool searchRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) return true;

        
        if (arr[left] == arr[mid] && arr[mid] == arr[right]) {
            left++;
            right--;
        }

        
        else if (arr[left] <= arr[mid]) {
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        
        else {
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return false;
}

int main(){
    int arr[] = {2, 5, 6, 0, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    int target = 0;
    cout << boolalpha << searchRotatedArray(arr, n, target) << endl; // true
}
