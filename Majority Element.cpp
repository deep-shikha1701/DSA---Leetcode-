class Solution {
public:
    
     int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
         int ans;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        int min =nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(umap[nums[i]] > min)
                ans = nums[i];
                
        }
        
        return ans;
    }
    
//     int majorityElement(vector<int>& nums) {
//         int count = 0;
//         int ans = INT_MAX;
//         for( int i=0;i<nums.size();i++){
//             if(count == 0)
//                 ans = nums[i];
//             count += (nums[i] == ans) ? 1: -1; //
//         }
        
//         return ans;
//     }
};
