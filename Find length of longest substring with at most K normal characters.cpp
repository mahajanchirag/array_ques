#include <bits/stdc++.h>
using namespace std;

int maxNormalSubstring(string& P, string& Q,
                       int K, int N)
{
    if(K==0)
    {
        return 0;
    }
    
    int i=0,j=0,count=0,len=0;
    while(j<N)
    {
        
        if(Q[P[j]-'a']=='0')
        {
            if((count+1)<=K)
            {
                count++;
                
            }
            
            else
            {
                while(Q[P[i]-'a']!=0)
                {
                    i++;
                }
                i++;
               
                //count--;
                
            }
             
        }
        
        //cout<<i<<" ";
         if (count <= K)   
            len=max(len,j-i+1);
        j++;
        
    }
    return len;
    
}

int main()
{
    // initialise the string
    string P = "giraffe", Q = "01111001111111111011111111";
 
    int K = 2;
 
    int N = P.length();
 
    cout << maxNormalSubstring(P, Q, K, N);
 
    return 0;
}
