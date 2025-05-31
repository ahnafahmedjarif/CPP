// Write a function to rotate the elements of a vector to the left and right by k positions.

#include <iostream>
#include <vector>
using namespace std;

void rotateLeft(vector<int>& vec, int k){
    int n = vec.size();
    k = k % n;
    vector<int> result;

    for (int i = k; i < n; i++) {
        result.push_back(vec[i]);
    }

    for (int i = 0; i < k; i++) {
        result.push_back(vec[i]);
    }

    vec = result;
    for (int val: vec) {
        cout << val << " ";
    }
    cout << endl;

}

void rotateRight(vector<int>& vec, int k) {
    int n = vec.size();
    k = k % n;
    vector<int> result;

    for (int i = n - k; i < n; i++) {
        result.push_back(vec[i]);
    }

    for (int i = 0; i <= k; i++) {
        result.push_back(vec[i]);
    }

    vec = result;
    for (int val: vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int k = 2;
    // rotateLeft(vec, k);
    rotateRight(vec, k);

    return 0;
}