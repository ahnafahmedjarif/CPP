// WAF to print intersection of two arrays

#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[],  int size1, int size2) {

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

}

int main () {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {1, 2, 3, 4};
    int size2 = sizeof(arr2) / sizeof(int);

    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "intersection: ";
    intersection(arr1, arr2, size1, size2);

    cout << endl;

    return 0;
}