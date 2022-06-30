class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(128, -1);//Use 128vector replace HashMap
        int res = 0, left = -1;//result and left
        for(int i=0;i<s.size();++i){
            left = max(left, map[s[i]]);
            map[s[i]] = i;
            res = max(res, i - left);
        }
        return res;
    }
};