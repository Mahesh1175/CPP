#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> mergedArray(m+n);

        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {  //merging 
            if (nums1[i] < nums2[j]) {
                mergedArray[k++] = nums1[i++];
            } else {
                mergedArray[k++] = nums2[j++];
            }
        }

//if any element is remaining
        while (i < m) {
            mergedArray[k++] = nums1[i++];
        }

        while (j < n) {
            mergedArray[k++] = nums2[j++];
        }

      int arrLength = mergedArray.size();
      double median;

    if(arrLength % 2 == 0)//even length
    {
         median = (mergedArray[arrLength / 2 - 1] + mergedArray[arrLength / 2]) / 2.0;
    }
    else{                     //odd length
        median = mergedArray[arrLength / 2];
    }

    return median;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    double median = solution.findMedianSortedArrays(nums1, nums2);
    cout << "The median is: " << median << endl; // Expected output: 2.5
    return 0;
}