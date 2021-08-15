class Solution {
public:
    int compress(vector<char>& chars) {
        
        int len=0;
        int i=0;
        int count;
        while(i<chars.size())
        {
            count=0;
            char temp=chars[i];
            while(i<chars.size() && chars[i]==temp)
            {
                i++;
                count++;
            }
            
            chars[len]=temp;
            if(count==1)
            {
                len++;
                
            }
            
            else if(count<=9)
            {
                len++;
                chars[len]='0'+count;
                len++;
            }
            
            else if(count>=10)
            {
                len++;
                chars[len]='0'+count/10;
                len++;
                chars[len]='0'+count%10;
                len++;
            }  
        }
        
        return len;
    }
};
