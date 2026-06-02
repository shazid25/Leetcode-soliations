// 35. Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size()-1,i=0;
        if(n==0 && nums[n]>=target)
            return n;
        if(target>nums[n])
            return n+1;    
     while(i<n) {
            if(nums[i]>=target)
                return i;
                i++;
       }
return i;
    }
};