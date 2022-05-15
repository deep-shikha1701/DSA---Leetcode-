class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq; //use a proprity queue
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]); // push all the elemets in to pq
        }
        int t= k-1; //if you want 4th largest, pop the first 3 elements
        while(t--){
            pq.pop();
        }
        return pq.top(); //return the top
    }
};
