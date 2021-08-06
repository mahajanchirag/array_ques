class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int count1=0,count2=0,a=-1,b=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a)
            {
                count1++;
            }
            
            else if(nums[i]==b)
            {
                count2++;
            }
            
            else if(count1==0)
            {
                a=nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                b=nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a)
            {
                count1++;
            }
            
            else if(nums[i]==b)
            {
                count2++;
            }
        }
        
        vector<int> ans;
        if(count1>nums.size()/3)
        {
            ans.push_back(a);
        }
        if(count2>nums.size()/3)
        {
            ans.push_back(b);
        }
        return ans;
        
    }
};
