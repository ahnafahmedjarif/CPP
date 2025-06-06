#include <iostream>
#include <vector>
using namespace std;

void sum() {
    int total_sum = 0;
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> vec(rows, vector<int>(cols));

    // Input
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> vec[i][j]; 
        }
    }

    // Output
    cout << "Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << vec[i][j] << " ";
            total_sum += vec[i][j]; // Add each element to the total sum
        }
        cout << endl;
    }

    cout << "Sum of all elements: " << total_sum << endl;
}

int main() {
    sum();
    return 0;
}