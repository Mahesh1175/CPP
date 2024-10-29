#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; // Pointer for nums1
        int p2 = n - 1; // Pointer for nums2
        int k = m + n - 1; // Last index of nums1

        // Merge nums2 into nums1
        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[k--] = nums1[p1--];
            } else {
                nums1[k--] = nums2[p2--];
            }
        }
    }
};

int main() {
    Solution solution;

    // Test case
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 with enough space (0s are placeholders)
    vector<int> nums2 = {2, 5, 6};
    int m = 3; // Number of valid elements in nums1
    int n = 3; // Number of valid elements in nums2

    solution.merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl; // Expected output: 1 2 2 3 5 6

    return 0;
}
