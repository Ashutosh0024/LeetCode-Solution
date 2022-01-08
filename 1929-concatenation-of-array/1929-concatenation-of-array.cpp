class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int>nums2(nums);
        vector<int> ans;
        
        
        ans.insert(ans.begin() , nums.begin(), nums.end());
        ans.insert(ans.end() , nums2.begin(), nums2.end());
        
        
        
        return ans;
        
        
    }
};