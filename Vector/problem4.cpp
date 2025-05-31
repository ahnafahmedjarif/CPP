// WAF to find second largest value in a vector

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void secondLargestVal(vector<int>& vec) {
    if (vec.size() < 2) {
        return;
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int val: vec) {
        if (val > max) {
            secondMax = max;
            max = val;
        } else if (val > secondMax && val != max) {
            secondMax = val;
        }
    }

    if (secondMax == INT_MIN) {
        return;
    } else {
        cout << "Second Max: " << secondMax << endl;
    }

}

int main() {
    vector<int> vec = {2, 4, 6, 7, 9};
    for (int val: vec) {
        cout << val << " ";
    }
    cout << endl;

    secondLargestVal(vec);
    cout << endl;

    return 0;
}