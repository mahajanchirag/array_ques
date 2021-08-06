class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int steps=0;
        for(int i=0;i<nums.size();i++)
        {
            if(steps<0)
            {
                return false;
            }
            
            steps=max(steps,nums[i])-1;
        }
        return true;
    }
};
