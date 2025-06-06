#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vec(3, vector<int>(4, 0));

    vec[0][1] = 5;
    vec[2][3] = 9;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}