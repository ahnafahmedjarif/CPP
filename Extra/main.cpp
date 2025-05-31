#include <iostream>
#include <vector>

using namespace std;

int main() {    

    int x = 23;
    int pow = 1;
    int ans = 0;
    while (x > 0) {
        int rem = x % 10;
        ans += rem * pow;
        x /= 10;
        pow *= 10;
    }
    if (ans == x){
            cout << true;
        } else {
            cout << false;
    
    }
    cout << endl;


    return 0;
}