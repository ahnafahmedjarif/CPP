#include <iostream>
using namespace std;

int singleNonDuplicate(int A[], int n){

    if (n == 1) return A[0];

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
            
        if (mid == 0 && A[0] != A[1]) return A[0];
        if (mid == (n - 1) && A[n - 1] != A[n - 1]) return A[mid];

        if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1]) return A[mid];

        if (mid % 2 == 0){
            if (A[mid] == A[mid - 1]) right = mid - 1;
            else left = mid + 1;
        }

        else {
            if (A[mid] == A[mid - 1]) left = mid + 1;
            else right = mid - 1;
        }
    }

    return -1;

}


int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(arr) / sizeof(int);

    cout << singleNonDuplicate(arr, n) << endl;

    return 0;
}