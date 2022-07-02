class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, i = 0, j = height.size() - 1;//set i for left size, j for right
        while(i < j){
            ans = max(ans, min(height[i], height[j])*(j-i)); //let i and j goes to each other
            if(height[i] < height[j])++i;
            else --j;
        }
        return ans;
    }
};
