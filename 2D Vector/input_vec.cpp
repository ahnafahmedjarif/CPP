#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    // Input
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];

    // Output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}
