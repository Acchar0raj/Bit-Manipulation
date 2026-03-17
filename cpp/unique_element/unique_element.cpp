#include <iostream>
#include <vector>

using namespace std;

/*
    Problem:
    Given an array where every element appears twice except two numbers,
    find those two unique numbers.

    Approach (XOR Trick):
    1. XOR all elements → duplicates cancel out → result = x ^ y
    2. Find a set bit (diff) where x and y differ
    3. Divide elements into two groups based on this bit
    4. XOR each group separately → gives the two unique numbers

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

vector<int> findUniqueNumbers(const vector<int>& arr) {
    int xor_all = 0;

    // Step 1: XOR all elements
    for (int num : arr) {
        xor_all ^= num;
    }

    // Step 2: Get rightmost set bit (distinguishing bit)
    int diff_bit = xor_all & (-xor_all);

    int num1 = 0, num2 = 0;

    // Step 3: Split into two groups and XOR separately
    for (int num : arr) {
        if (num & diff_bit) {
            num1 ^= num;
        } else {
            num2 ^= num;
        }
    }

    return {num1, num2};
}

int main(){
    vector<int> arr={2,3,2,1,4,5,4,1};
    vector<int> res=findUniqueNumbers(arr);
    for(auto val:res){
        cout<<val<<endl;
    }
}