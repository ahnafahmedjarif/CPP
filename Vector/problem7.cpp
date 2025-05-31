// WAF find the median of a vector (assuming it’s sorted)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double median(vector<int>& vec) {
    int size = vec.size();
    int medianIndex = INT_MIN;

    if (size % 2 == 0) {
        int mid1 = size / 2 - 1;
        int mid2 = size / 2;
        return (vec[mid1] + vec[mid2]) / 2.0;
    } else {
        int mid = size / 2;
        return vec[mid];
    }
}

int main() {

    vector<int> vec = {2, 5, 7, 8, 9, 10};
    for (int val: vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << median(vec) << endl;

    return 0;
}