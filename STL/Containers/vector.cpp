#include <bits/stdc++.h>
using namespace std;

int main(){

    // Declaration of Vector
    vector<int> v;

    v.push_back(1); // {1}
    v.emplace_back(2); // {1, 2} 

    vector<pair<int, int>> vec;

    vec.push_back({1, 2}); // {{1, 2}}
    vec.emplace_back(3, 4); // {{1, 2}, {3, 4}}

    vector<int> v1(5, 20); // {20, 20, 20, 20, 20}

    vector<int> nums = {20, 10, 25, 5, 7};
    vector<int>::iterator it1 = nums.begin();

    it1++;
    cout << *(it1) << "\n"; // 10

    it1 = it1 + 2;
    cout << *(it1) << "\n"; // 5

    it1 = nums.end();
    it1--;
    cout << *(it1) << "\n"; 

    // printing a vector

    // method 1
    for (auto it = nums.begin(); it != nums.end(); it++){
        cout << *(it) << " "; // 20, 10, 25, 5, 7
    }
    cout << endl;

    // method 2
    for (auto val: nums){
        cout << val << " "; // 20, 10, 25, 5, 7
    }
    cout << endl;

    // Erase function
    nums.erase(nums.begin()+1); // 20, 25, 5, 7
    nums.erase(nums.begin()+2, nums.begin()+4); // 20, 10, 7 ---> [start, end) 

    // Insert function

    vector<int> v2(2, 100); // {100, 100}
    v2.insert(v2.begin(), 3000); // {300, 100, 100}
    v2.insert(v2.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    // Copy function
    vector<int> copy(2, 50); // {50, 50}
    v2.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // size function
    v2.size(); // 7

    // more
    // v1 --> {10, 20}
    // v2 --> {30, 40}
    v2.swap(v1); // v1 --> {30, 40}, v2 

    return 0;
}