#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;

    // Insert key-value pairs
    mp["Alice"] = 18;
    mp["Bob"] = 21;
    mp["Charlie"] = 19;

    // Access value by key
    cout << "Alice's age: " << mp["Alice"] << endl;

    // Traverse map
    for (auto it : mp) {
        cout << it.first << " => " << it.second << endl;
    }

    return 0;
}
