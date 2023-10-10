class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int result=0;
        int i=0;
        int j=nums.size()-1;
        sort(nums.begin(), nums.end());
        while(i<j){
            if(nums[i]+ nums[j]==k){
                i++;
                j--;
                result++;
            }
            else if(nums[i]+nums[j]<k){
                i++;
            }
            else if(nums[i]+nums[j]>k){
                j--;
            }
        }
        return result;
    }
};