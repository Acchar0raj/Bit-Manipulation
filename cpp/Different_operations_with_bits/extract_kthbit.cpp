#include <iostream>

using namespace std;

/*
    Problem:
    Extract (get) the k-th bit of a number (0-based indexing).

    Example:
    n = 37 (100101 in binary)
    k = 0
    → Output: 1 (least significant bit)

    Approach:
    1. Right shift the number by k → brings k-th bit to position 0
    2. AND with 1:
        - isolates the last bit (either 0 or 1)

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

int getKthBit(int n, int k) {
    return (n >> k) & 1;
}

int main() {
    int n = 37;
    int k = 0;

    int result = getKthBit(n, k);

    cout << "Number: " << n << endl;
    cout << "Bit at position " << k << ": " << result << endl;

    return 0;
}