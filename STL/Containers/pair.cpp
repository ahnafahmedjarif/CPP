#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second; // 1 2
    cout << endl;
    
    pair <int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first; // 1 3 2
    cout << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second << endl; // 5

    return 0;
}