#include <iostream>

using namespace std;

/*
    Problem:
    Toggle the k-th bit of a number (0-based indexing).

    Example:
    n = 16 (10000 in binary)
    k = 4
    → Toggle 4th bit → result = 0 (00000)

    Approach:
    1. Create a mask with only the k-th bit set → (1 << k)
    2. XOR the number with the mask:
        - If bit is 1 → becomes 0
        - If bit is 0 → becomes 1

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

int toggleKthBit(int n, int k) {
    int mask = (1 << k);   // Create mask with k-th bit set
    return n ^ mask;       // Toggle using XOR
}

int main() {
    int n = 16;
    int k = 4;

    int result = toggleKthBit(n, k);

    cout << "Original number: " << n << endl;
    cout << "After toggling bit " << k << ": " << result << endl;

    return 0;
}