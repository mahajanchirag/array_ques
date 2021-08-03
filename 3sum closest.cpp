class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n && diff!=0;i++)
        {
            int low=i+1,high=n-1;
            while(low<high)
            {
                if(abs(target-(nums[i]+nums[low]+nums[high]))<abs(diff))
                {
                  diff=   target-(nums[i]+nums[low]+nums[high]);
                }
                
                 if((nums[i]+nums[low]+nums[high])<target)
                {
                  low++;  
                }
                
                else
                {
                    high--;
                }
            }
        }
        return target-diff;
    }
};
