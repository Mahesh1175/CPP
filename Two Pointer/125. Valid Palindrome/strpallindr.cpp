#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;

        while(l<r){ // Checking while left ptr is less than right ptr

            while(l < r && !isalnum(s[l])) l++; // Move left to right ptr if character is not alphanumuric 

            while(l < r && !isalnum(s[r])) r--; // Move right to left ptr if character is not alphanumuric

            if(tolower(s[l]) != tolower(s[r])) return false;

            l++;
            r--;
        }

       return true;
    }
};

int main() {
    Solution solution;

    // Test with various inputs
    cout << boolalpha; // Print 'true' or 'false' instead of 1 or 0
    cout << "Test Case 1: " << solution.isPalindrome("A man, a plan, a canal: Panama") << endl; // Expected output: true
    cout << "Test Case 2: " << solution.isPalindrome("race a car") << endl; // Expected output: false
    cout << "Test Case 3: " << solution.isPalindrome(" ") << endl; // Expected output: true

    return 0; 
}