class Solution {
public:
    static bool compare(vector<int> a,vector<int> b)
    {
        return a[0]<b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),compare);
        int st=intervals[0][0];
        int la=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(la>=intervals[i][0])
            {
                la=max(intervals[i][1],la);
            }
            
            else
            {
                ans.push_back({st,la});
                st=intervals[i][0];
                la=intervals[i][1];
            }    
            
        }
        
        ans.push_back({st,la});
        return ans;
        
    }
};
