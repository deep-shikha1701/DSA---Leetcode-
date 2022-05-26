class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<bool>> dp(n, vector<bool> (n, false));
        int x,y,max=INT_MIN;
        for(int i=n-1; i>=0; i--){
        for(int j=i; j<=n-1; j++){
                if(i==j)
                    dp[i][j] = true;
                else if(s[i]==s[j]){
                    if(j-i ==1)
                        dp[i][j] = true;
                    else
                        dp[i][j]=dp[i+1][j-1];
                }
                if(dp[i][j] && j-i>=max){
               max=j-i;
                x=i;
                y=j;
        }    
        }
        }
        string lps = s.substr(x,y-x+1);
        
        return  lps;
    }
};
