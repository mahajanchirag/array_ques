class Solution {
public:
    string multiply(string num1, string num2) {
        
        if (num1 == "0" || num2 == "0") return "0";
        vector<int> v(num1.length()+num2.length(),0);
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                v[i+j+1]=v[i+j+1]+(num1[i]-'0')*(num2[j]-'0');
                v[i+j]=v[i+j]+v[i+j+1]/10;
                v[i+j+1]=v[i+j+1]%10;
            }
        }
        
        int i=0;
        while(i<v.size() && v[i]==0)
        {
            i++;
        }
        
        string str="";
        while(i<v.size())
        {
            str.push_back('0'+v[i]);
            i++;
        }
        return str;
    }
};
