class Solution {
public:
    int countSubstrings(string s) {
        int count=0; 
        int n=s.length();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<=n-1;j++){
                if(i==j)
                    dp[i][j] = 1;
                
                else if(s[i]==s[j]){
                    if(j-i == 1)
                        dp[i][j] = 1;
                    else{
                        dp[i][j] = dp[i+1][j-1];
                    }
                }
                // cout << dp[i][j];
                if(dp[i][j])
                    count++;
    
            }
        }
        
        return count;
        
    }
};
