// WAF to find the maximum value in a vector

#include <iostream>
#include <vector>
using namespace std;

void maxVal(vector<int> vec, int size) {
    int max = vec[0];

    for (int i=0; i<size; i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }

    cout << "Max: " << max << endl;
}

int main(){

    vector<int> vec = {2, 8, 7, 9, 3, 5};
    int size = vec.size();
    for (int val: vec) {
        cout << val << " ";
    }
    
    cout << endl;

    maxVal(vec, size);
    

    return 0;
}
