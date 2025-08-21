#include <iostream>
#include <vector>
using namespace std;

/*
    Naive Approach: Counts set bits by checking each bit one-by-one.
    Time Complexity: O(N), where N is the total number of bits in the number (usually 32 or 64).
*/
int naive_approach(int n) {
    int ans = 0;
    while (n > 0) {
        ans += n & 1;     // If LSB is set, adds 1 to ans (checks if last bit is 1)
        n >>= 1;          // Shifts number right by 1 bit (divides by 2)
    }
    return ans;
}

/*
    Kernighan's Algorithm: Efficiently counts set bits by repeatedly flipping the lowest set bit to zero.
    Time Complexity: O(s), where s is the number of set bits (much faster if the number is sparse).
*/
int Kernighan_Algorithm(int n) {
    int ans = 0;
    while (n > 0) {
        n &= (n - 1);     // Removes the lowest set bit from n
        ans++;            // Increments count of set bits
    }
    return ans;
}

/*
    Built-in Function: Uses GCC/Clang's __builtin_popcount for fast hardware or library-supported bit counting.
    Time Complexity: O(1) in practice (highly optimized).
*/
int function_builtin(int n) {
    return __builtin_popcount(n);
}

int main() {
    int num1 = 13; // binary: 1101
    int num2 = 15; // binary: 1111
    int num3 = 5;  // binary:  101

    // Output set bit counts of each algorithm for given inputs
    cout << "naive_approach(13): " << naive_approach(num1) << " (binary: 1101)" << endl;
    cout << "Kernighan_Algorithm(15): " << Kernighan_Algorithm(num2) << " (binary: 1111)" << endl;
    cout << "function_builtin(5): " << function_builtin(num3) << " (binary: 101)" << endl;

    return 0;
}

/*
Expected Output:
naive_approach(13): 3 (binary: 1101)
Kernighan_Algorithm(15): 4 (binary: 1111)
function_builtin(5): 2 (binary: 101)
*/
