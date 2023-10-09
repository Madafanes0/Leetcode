class Solution {
public:
    int maxArea(vector<int>& height) {
        int c=height.size();
        int j=c-1;
        int maxArea=0;
        int i=0;

        while(i<j){

            int area=min(height[i], height[j])*(j-i);
            maxArea=max(maxArea, area);

            if(height[i]<height[j])
                i++;
                
            else
                j--;
        }
        return maxArea;
    }
};