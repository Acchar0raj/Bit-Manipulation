#include <iostream>

using namespace std;

/*
    Problem:
    Set (turn ON) the k-th bit of a number (0-based indexing).

    Example:
    n = 16 (10000 in binary)
    k = 3
    → Set 3rd bit → result = 24 (11000)

    Approach:
    1. Create a mask with only the k-th bit set → (1 << k)
    2. Use OR operation:
        - If bit is 0 → becomes 1
        - If bit is already 1 → remains 1

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

int setKthBit(int n, int k) {
    int mask = (1 << k);   // Create mask with k-th bit set
    return n | mask;       // Set the bit using OR
}

int main() {
    int n = 16;
    int k = 3;

    int result = setKthBit(n, k);

    cout << "Original number: " << n << endl;
    cout << "After setting bit " << k << ": " << result << endl;

    return 0;
}