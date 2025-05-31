// WAF to calculate sum, difference, product, quotient of all numbers in an array

#include <iostream>
using namespace std;

int sum(int arr[], int size) {

    int result = 0;

    for (int i = 0; i < size; i++) {
        result += arr[i];
    }

    return result;

}

int difference(int arr[], int size) {
    int result = arr[0] - arr[1];

    for (int i = 2; i < size; i ++) {
        result -= arr[i];
    }

    return result;
}

int product(int arr[], int size) {
    int result = arr[0];

    for (int i = 1; i < size; i++) {
        result *= arr[i];
    }

    return result;
}

int quotient(int arr[], int size) {
    long result = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] != 0) {
            result /= arr[i];
        } else {
            cout << "Math error" << endl;
        }
    }

    return result;
}

int main() {

    int arr[] = {2, 6, 1, 4, 9, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << sum(arr, size) << endl;
    cout << difference(arr, size) << endl;
    cout << product(arr, size) << endl;
    cout << quotient(arr, size) << endl;

    return 0;
}