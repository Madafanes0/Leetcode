#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int c=nums.size();
        int right=0;
        int left=0;
        int count=0;
        int lenght=0;

        while(right<c){
            if(nums[right]==0)
                count++;

            while(count>1){
                if(nums[left]==0){
                    count--;
                }
            left++;
            }

            lenght=max(lenght, right-left);
            right++;
        }  
        return lenght;  
    }
};