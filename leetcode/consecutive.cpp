#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int c = nums.size();
        int left = 0;  
        int right = 0; 
        int maxOnes = 0; 

        while (right < c) {
            if (nums[right] == 0) {
                k--;  
            }

            while (k < 0) {
                if (nums[left] == 0) {
                    k++; 
                }
                left++; 
            }

            maxOnes = max(maxOnes, right - left + 1);
            right++;
        }

        return maxOnes;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;

    int result = sol.longestOnes(nums, k);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
