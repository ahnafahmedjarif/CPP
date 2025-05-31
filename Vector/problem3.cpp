// WAF to remove duplicates from a vector

#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int>& vec) {
    int size = vec.size();

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (vec[i] == vec[j]) {
                vec.erase(vec.begin() + j);
                size--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    vector<int> vec = {1, 2, 2, 3, 3, 4};

    cout << "Before: ";
    for (int val: vec) cout << val << " ";
    cout << endl;

    removeDuplicates(vec);

    cout << "After: ";
    for (int val: vec) cout << val << " ";
    cout << endl;

    return 0;
}