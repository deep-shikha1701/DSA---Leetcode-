//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

//A subarray is a contiguous part of an array.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int largest = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > largest)
                largest = nums[i];
        }
        if(largest < 0){ //if all the elements are -ve them the largest will be the maximum subarray 
            return largest;
        }
        
        int currSum=0;  //max so far
        int t =0; //max ending here
        
        for(int i=0;i<nums.size();i++){
            t+= nums[i];
            if(t<0){ //we see the values goes negative we make it 0
                t = 0; 
            }
            currSum = max(currSum, t); //update the max so far if max ending here is greater than max so far
        }
        
        return currSum;
    }
};
