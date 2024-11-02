#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        size_t p1 = 0; // Ptr for string `s`  
        size_t p2 = 0; // Ptr for string `t`

        /*Using size_t instead of int because s.size() returns size_t,
         and it avoids signed/unsigned comparison issues  */

        /*Also to avoid comparison between signed and unsigned integer expressions */
        
        // Loop through characters in `t`, checking for a match with characters in `s`
        while (p1 < s.size() && p2 < t.size()) {
            if (s[p1] == t[p2]) {
                p1++; // Move to the next character in `s` if a match is found
            }
            p2++; // Always move to the next character in `t`
        }

        // If `p1` has reached the end of `s`, `s` is a subsequence of `t`
        return (p1 == s.size());
    }
};

int main() {
    Solution solution;

    // Test case: check if one string is a subsequence of another
    string s = "abc";
    string t = "ahbgdc";

    // Output the result
    if (solution.isSubsequence(s, t)) {
        cout << "Yes, \"" << s << "\" is a subsequence of \"" << t << "\"." << endl;
    } else {
        cout << "No, \"" << s << "\" is not a subsequence of \"" << t << "\"." << endl;
    }

    return 0;
}
