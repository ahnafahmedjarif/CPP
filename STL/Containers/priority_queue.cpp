#include <bits/stdc++.h>
using namespace std;

int main(){
    // max heap
    priority_queue<int> pq1;

    pq1.push(5); // {5}
    pq1.push(2); // {5, 2}
    pq1.push(8); // {8, 5, 2}
    pq1.push(10); // {10, 8, 5, 2}

    cout << pq1.top(); // prints 10
    pq1.pop(); // {8, 5, 2}

    cout << pq1.top(); // prints 8

    // size, swap, empty functions are same as others

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5); // {5}
    pq2.push(2); // {2, 5}
    pq2.push(8); // {2, 5, 8}
    pq2.emplace(10); // {2, 5, 8, 10}

    cout << pq2.top(); // prints 2

    return 0;
}