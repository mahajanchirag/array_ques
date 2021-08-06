class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>> &ans,vector<int> &temp,int pos)
    {
        ans.push_back(temp);
        
        for(int i=pos;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            helper(nums,ans,temp,i+1);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums,ans,temp,0);
        return ans;
    }
};
