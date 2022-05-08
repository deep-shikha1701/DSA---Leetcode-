class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> val; //take and empty set
        for(int i=0; i<nums.size();i++){
            if(val.find(nums[i]) == val.end()){ //if nums[i] is not in set insert it into set 
                val.insert(nums[i]); 
            }
            else{
                return true; // else return true
            }
        }
        return false;
    }
};
