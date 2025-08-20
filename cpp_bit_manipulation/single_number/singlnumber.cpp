#include <iostream>
#include <vector>
using namespace std;

// Function to find the single number in the array where every other number appears twice
int singlenumber(vector<int>& nums) {
    int ans = 0;  // Initialize answer to 0
    // XOR all numbers in the vector
    for (int num : nums) {
        ans ^= num;  // XOR operation cancels out duplicates and keeps the unique number
    }
    return ans;  // Return the unique single number
}

int main() {
    // Example input array where every number appears twice except 4
    vector<int> arr = {4, 1, 2, 1, 2};
    
    // Print the result of single number found by the function
    cout << singlenumber(arr);

    return 0;
}
