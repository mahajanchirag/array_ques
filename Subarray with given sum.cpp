class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
      //Using sliding window
        int flg=0, j=0, i=0;
        long sum=0;
        vector<int> v;
        while(i<=n){
            if(sum<s)
                sum+=arr[i++];
            else if(sum>s)
                sum-=arr[j++];
            if(sum==s){
                flg=1;
                break;
            }
        }
        if(flg){
            v.push_back(j+1);
            v.push_back(i);
        }
        else
            v.push_back(-1);  
        return v;
    }
};
