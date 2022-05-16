class Solution {
public:
    int findMin(vector<int>& nums) {//use Binary Search for O(log n)
        int ans;
        int start = 0 ;
        int end = nums.size()-1;
        if(nums[start] <= nums[end]){
            return nums[0];
        }
        
        while(start<=end){
            int mid = (start+end)/2;
            if(mid > 0 && nums[mid] < nums[mid-1] )
                return nums[mid];
            
            if(mid > 0 && nums[mid] > nums[mid+1] )
                return nums[mid+1];
            
            if(nums[mid]>=nums[start]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return 1;
    }
};
