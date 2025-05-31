// WAF to sort a vector in ascending and descending order

#include <iostream>
#include <vector>
using namespace std;

void ascendingVector(vector<int>& vec, int size) {
    for (int i = 0; i < size - 1; i++) {
        int index_min = i;
        for (int j = i + 1; j < size; j++) {
            if (vec[j] < vec[index_min]) {
                index_min = j;
            }
        }
        if (index_min != i) {
            swap(vec[i], vec[index_min]);
        }
    }
}

void descendingVector(vector<int>& vec, int size) {
    for (int i = 0; i < size - 1; i++) {
        int index_max = i;
        for (int j = i + 1; j < size; j++) {
            if (vec[j] > vec[index_max]) {
                index_max = j;
            }
        }
        if (index_max != i) {
            swap(vec[i], vec[index_max]);
        }
    }
}

int main() {
    vector<int> vec = {2, 4, 3, 5, 1};
    int size = vec.size();

    cout << "Original: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    ascendingVector(vec, size);
    cout << "Ascending sort: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    descendingVector(vec, size);
    cout << "Descending sort: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}