class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;//define unordered map
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            map[nums[i]] = i;
        }//store nums in map
        for(int i=0;i<nums.size();++i){
            int t = target - nums[i];
            if(map.count(t)&&map[t]!=i){
                res.push_back(i);
                res.push_back(map[t]);
                break;
            }//if map[t] + i = target, return
        }
        return res;
    }
};