#include <iostream>
using namespace std;

int countOccurrence(int arr[], int n, int target) {
    int left = 0, right  = n - 1;
    int first_index = -1, last_index = -1;

    // first index
    while(left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target){
            first_index = mid;
            right = mid - 1;
        } 
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1; 
    }

    // reset bounds for last index search
    left = 0;
    right = n - 1;

    // last index
    while(left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target){
            last_index = mid;
            left = mid + 1;
        } 
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    if (first_index == -1) return 0;
    return last_index - first_index + 1;
}

int main(){
    int arr[] = {1, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(int);  
    int target = 2;

    cout << countOccurrence(arr, n, target) << endl;

    return 0;
}