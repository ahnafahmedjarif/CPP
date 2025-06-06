#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target){
    int left = 0, right = n - 1;
    int index = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] == target) {
            index = mid;
            right = mid - 1;    
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return index;
}

int main(){
    int arr[] = {1, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int target = 2;
    cout << "First occurrence at index: " << findFirstOccurrence(arr, n, target) << endl;
    
    return 0;
}