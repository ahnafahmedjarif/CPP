// WAF to print all the unique values of an array

#include <iostream>
using namespace std;

void uniqueVal(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

}

int main () {

    int arr[] = {1, 2, 3, 1, 2, 3, 4, 4, 7, 8};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Unique Value: ";
    uniqueVal(arr, size);

    cout << endl;

    return 0;
}