class Solution {
  public:
    void reArrange(int a[], int n) {
        // code here
        int i=0;
        int j=1;
        while(i<n && j<n)
        {
            if(a[i]%2==1)
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
                j+=2;
            }
            else
            {
                i+=2;
                
            }
        
        
        }
    }
