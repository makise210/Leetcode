class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2)return s;
        int start = 0, end = 0;//the direction of begin and the end
        for(int i=0;i<s.size();++i){
            expand(s, i, i, start, end);//expand from one character
            expand(s, i, i+1, start, end);//expand from two character
        }
        return s.substr(start, end);//the substrimg from s
    }
    void expand(string s, int left, int right, int &start, int &end){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            --left; ++right;
        }//verify both side equal or not
        if(end < right - left - 1){
            start = left + 1;
            end = right - left - 1;
        }
    }
};