#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.emplace(2); // {1, 2}
    st.insert(3); // {1, 2, 3}
    st.insert(4); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), swap(), empty(), end(), rend(), rbegin(), size()
    // are same as others

    auto it1 = st.find(3);
    cout << *(it1); // 3
    auto it2 = st.find(6);
    cout << *(it2);

    int cnt = st.count(1);

    auto it3 = st.find(3);
    st.erase(it3); // it takes constant time
    
    auto it4 = st.find(2);
    auto it5 = st.find(4);
    st.erase(it4, it5); // (start, end]

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(3);

    return 0;
}