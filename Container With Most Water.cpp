class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int area = INT_MIN ;
        while(left < right){
            int min_h = min(height[left], height[right]);
            int temp = min_h * (right-left);
            area = max(area, temp);
            if(height[left] == min_h ){
                left++;
            }else{
                right--;
            }
        }
        return area;
    }
    
};
