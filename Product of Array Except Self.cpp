class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size(),ans=1,j=0;
        vector<int> v(n,0);
        
        for(int i=0;i<n;i++)
        {
            ans *= nums[i];
            v[i] = ans;
        }
        ans=1;
        for(int i= n-1;i>=0;i--)
        {
            ans *=nums[i];
            nums[i] = ans;
            if(i==0)
                v[i] = nums[i+1];
            else if(i==n-1)
                v[i] = v[i-1];
            else{
                v[i] = v[i-1] * nums[i+1];
            }
        }
        return v;
    }
};
