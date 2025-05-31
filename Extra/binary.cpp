#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += rem * pow;
        pow *= 10;

    }

    return ans;
}

int binaryToDec(int binaryNum) {
    int ans = 0;
    int pow = 1;

    while (binaryNum > 0) {
        int rem = binaryNum % 10;
        ans += rem * pow;
        binaryNum /= 10;

        pow *= 2;
    }

    return ans;

}

int main() {

    cout << decToBinary(42) << endl;
    cout << binaryToDec(1010) << endl;

    return 0;
}