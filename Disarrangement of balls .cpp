//https://practice.geeksforgeeks.org/problems/dearrangement-of-balls0918/1#
class Solution{
public:
    long int disarrange(int N){
        // code here
        long int mod = 1000000007;
        long int a = 0, b = 1;

        if(N == 1) return 0;
        if(N == 2) return 1;

        for(int i = 3; i <= N; i++)
        {

            int temp = (i-1)%mod * (b%mod + a%mod)%mod;
            a = b;
            b = temp;
        }
        return b;
    }
};
