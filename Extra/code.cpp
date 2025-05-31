#include <iostream>
using namespace std;


int main () {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = sizeof(nums) / sizeof(int);
    int min_num = nums[0];
    int max_num = nums[0];

    for (int i = 0; i < size; i++) {
        if (nums[i] < min_num) {
            min_num = nums[i];
        }
        if (nums[i] > max_num) {
            max_num = nums[i];
        }
    }


    cout << min_num << endl;
    cout << max_num << endl;

    return 0;
}