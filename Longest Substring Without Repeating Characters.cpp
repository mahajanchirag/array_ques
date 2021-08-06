class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int  i=0,j=0,ans=0;
        while(j<s.length())
        {
            if(map[s[j]]==0)
            {
                map[s[j]]++;
                ans=max(ans,j-i+1);
                j++;
            }
            
            else if(map[s[j]]!=0)
            {
                while(map[s[j]]!=0)
                {
                    map[s[i]]--;
                    i++;
                }
                map[s[j]]++;
                j++;
            }
        }
        
        return ans;
    }
};
