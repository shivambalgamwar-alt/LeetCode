class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> ans;
        
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        map<int, int> m;
        
        for(int i = 0; i < sorted.size(); i++) {
            if(m.find(sorted[i]) == m.end()) {
                m[sorted[i]] = i;
            }
        }
        
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(m[nums[i]]);
        }
        
        return ans;
    }
};