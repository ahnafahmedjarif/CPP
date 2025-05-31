// WAF to merge two sorted vectors into one sorted vector.

#include <iostream>
#include <vector>
using namespace std;

void mergeVector(vector<int>& vec1, vector<int> vec2) {
    int size1 = vec1.size();
    int size2 = vec2.size();
    vector<int> merged;

    int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size()) {
        if (vec1[i] < vec2[j]) {
            merged.push_back(vec1[i++]);
        } else {
            merged.push_back(vec2[j++]);
        }
    }

    while (i < vec1.size()) {
        merged.push_back(vec1[i++]);
    }

    // Add remaining elements from vec2 (if any)
    while (j < vec2.size()) {
        merged.push_back(vec2[j++]);
    }

    for (int val: merged) {
        cout << val << " ";
    }
    cout << endl;

}

int main() {
    vector<int> vec1 = {1, 3, 5};
    vector<int> vec2 = {2, 4, 6};

    cout << "First vector: ";
    for (int val: vec1) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Second vector: ";
    for (int val: vec2) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Merge vector: ";
    mergeVector(vec1, vec2);
    cout << endl;
}