class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int i=-1,j=0;
        int pos=0;
        int ans=1;
        while(pos<seats.size())
        {
            if(seats[pos]==1)
            {
                i=pos;
            }
            
            else
            {
                if(j<=pos)
                {
                    j=pos;
                    while(j<seats.size() && seats[j]==0 )
                    {
                        j++;
                    }
                    if(j==seats.size())
                    {
                        j=INT_MAX;
                    }
                }
                int dis;
                if(i==-1)
                {
                    dis=j-pos;
                }
                else
                {
                    dis=min(pos-i,j-pos);
                }
                ans=max(ans,dis);
                
            }
            pos++;
            
            
        }
        return ans;
        
        
        
    }
};
