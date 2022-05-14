class Solution {
public:
    
    // void swap(int* a, int* b){
    //     int temp = *b;
    //     a = b;
    //     *b = temp;
    // }
    
    void nextPermutation(vector<int>& nums) {
        
        if(nums.size()<=1) //if the array has only 1 element , no next permutation is possible
            return;
        
        int n=nums.size(); //size of nums
        int idx1 = n-2;
        int idx2 = n-1;
        
        for(idx1 = n-2;idx1 >= 0;idx1--){
            if(nums[idx1] < nums[idx1+1]){
                break;
            }
        } //Checking from the last, get the index of that element which is smaller than its next element ---> that will be our breakpoint
           // idx1 will stores the index of that element which is our breakpoint
        
        if(idx1<0){
            reverse(nums.begin(), nums.end());
        }else{
            for(idx2 = n-1;idx2 > idx1;idx2--){
                if(nums[idx2] > nums[idx1]){
                    break;
                }
            }
            swap(nums[idx1], nums[idx2]); //swap both the numbers
              reverse(nums.begin()+idx1+1, nums.end()); // reverse all the elemet from breakpoint+1 till end
        }
        
    
    
        
       // next_permutation(nums.begin(), nums.end());
    
    }
};
