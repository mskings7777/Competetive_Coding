class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n= nums.size();
        int left = 0;
        int pro = 1;
        int cnt = 0;

        for(int right=0; right<n; right++){
            pro *= nums[right];
            while(pro >= k && left <= right){
                pro /= nums[left];
                left ++;  
            } 
            cnt += (right-left+1);
        }

        return cnt;

    }
};