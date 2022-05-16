class Solution {
public:
    int maxProduct(vector<int>& nums) {
  
        int n=nums.size();  //same as Kadane's ALgorithm but for products
        int currProd=INT_MIN, temp=1;
        for(int i=0;i<n;i++){
            temp *= nums[i];
            currProd = max(temp, currProd);
            if(temp == 0){
                temp = 1;
            }
        }
        temp = 1;
        for(int i=n-1;i>=0;i--){
            temp *= nums[i];
            currProd = max(temp, currProd);
            if(temp == 0){
                temp = 1;
            }
        }
        
        return currProd;
        
    }
};
