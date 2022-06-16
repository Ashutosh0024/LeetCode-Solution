class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        vector<int> ans;
    
    int sum = 0;
    
    for(auto x:v){
        sum = sum + x;
        ans.push_back(sum);
    }
    
    for(auto i:ans)
        cout<<i<<endl;
        
    return ans;
        
    }
};