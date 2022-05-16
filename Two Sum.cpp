class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = i;
        }
        int temp;
        for(int i=0;i<nums.size();i++){
            int y = target-nums[i];
            if(map.find(y) != map.end() && map[y] != i){
                ans.push_back(i);
                ans.push_back(map[y]);
                break;
            }
        }
        return ans;
    }
};
