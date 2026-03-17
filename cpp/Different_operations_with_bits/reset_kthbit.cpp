#include <iostream>

using namespace std;

/*
    Problem:
    Reset (turn OFF) the k-th bit of a number (0-based indexing).

    Example:
    n = 16 (10000 in binary)
    k = 4
    → reset 4th bit → result = 0 (00000)

    Approach:
    1. Create a mask with only the k-th bit set → (1 << k)
    2. Complement to make the k-th bit unset and all other bit set .
    2. Use AND operation:
        - If bit is 1 → becomes 0
        - If bit is already 0 → remains 0

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

int resetKthBit(int n, int k) {
    int mask = ~(1 << k);   // Create mask with k-th bit set
    return n & mask;       // Set the bit using OR
}

int main() {
    int n = 24;
    int k = 3;

    int result = resetKthBit(n, k);

    cout << "Original number: " << n << endl;
    cout << "After resetting bit " << k << ": " << result << endl;

    return 0;
}