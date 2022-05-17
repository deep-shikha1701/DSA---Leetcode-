class Solution {
public:
    
//     vector<vector<int>> threeSum(vector<int>& nums) {
        
//        unordered_map<int, int> umap;
//         set<vector<int>> s;
//         vector<int> temp;
//         for(int i=0;i<nums.size();i++){
//             umap[nums[i]]++;
//         }
        
//         for(int i=0;i<nums.size();i++){
//               umap[nums[i]]-- ;
//             for(int j=i+1;j<nums.size();j++){
//                 umap[nums[j]]--;
//                 int k = -1*(nums[i]+nums[j]);
//                 if(umap.find(k) != umap.end() && umap[k] > 0){
//                     temp.clear();
//                     temp.push_back(nums[i]);
//                     temp.push_back(nums[j]);
//                     temp.push_back(k);
//                     sort(temp.begin(), temp.end());
//                     s.insert(temp);
                    
//                 }
//                 umap[nums[j]]++;
//             }
//             umap[nums[i]]++; 
//         }
        
//         vector<vector<int>> ans(s.begin(), s.end());
        
//         return ans;
//     }
    vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>> ans; 
        if(nums.size() < 3){
            return ans;
        }
        //in this problem,, we will first fix 'a' and then find (b+c) such that (b+c)==-a using two pointer 
        
        sort(nums.begin(), nums.end()); // sort the given vector
        vector<int> temp; 
      
        int sum;
        for(int i=0;i<nums.size()-2;i++){ // this loop keeps pointing to 'a' untill we find all possible combinations for it from rest of the array
            if(i==0 || (i>0 && nums[i] != nums[i-1]) ){ // this keeps the check that we are not generating combinations for same value of 'a'
                int low = i+1, high = nums.size()-1;
                sum = 0-nums[i];
                while(low<high){
                    if(nums[low] + nums[high] == sum){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        temp.clear();
                        
                        while(low<high && nums[low]==nums[low+1])low++; //
                        while(low<high && nums[high]==nums[high-1])high--;
                        
                        low++; 
                        high--;
                    }
                    else if(nums[low]+nums[high] < sum) low++; 
                    
                    else high--;
                }
            }    
        }
        
        return ans;
    }
};
