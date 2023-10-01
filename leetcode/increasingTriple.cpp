class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
   
    int c=nums.size();
    vector<int> resultado(c, 1);
    vector<int> left(c, 1);
    vector<int> right(c, 1);

    for(int i=1; i<c ;i++){
        left[i]= left[i-1] * nums[i-1];
    }

    for(int i=c-2; i>=0; i--){
        right[i]=right[i+1]*nums[i+1];
    }
    for(int i=0; i<c; i++){
        resultado[i]=left[i]*right[i];
    }


    return resultado;
    }
};
