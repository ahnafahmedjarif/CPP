#include <iostream>
using namespace std;

int minElement(int arr[], int n) {
    int left = 0, right = n - 1;
    
    while (left < right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] > arr[right]) {
           left = mid + 1;
        } else {
          right = mid;
        }
    }

    return left; 
}


int main() {
    int arr[] = {2, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << minElement(arr, n) << endl;

    return 0;

}