#include <iostream>
using namespace std;

double squareRoot(int x, int p) {
    if (x == 1 || x == 0) return x;

    int left = 0, right = x;
    int intPart = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if ((long long)mid * mid == x) return mid;
        else if ((long long)mid * mid < x) {
            intPart = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    double ans = intPart;
    double increment = 0.1;

    for (int i = 0; i < p; i++) {
        while ((ans + increment) * (ans + increment) <= x) {
            ans += increment;
        }
        increment /= 10;
    }

    return ans;
}

int main() {
    int x = 10;
    int p = 2;
    cout << fixed;       
    cout.precision(p);   
    cout << squareRoot(x, p) << endl;

    return 0;
}