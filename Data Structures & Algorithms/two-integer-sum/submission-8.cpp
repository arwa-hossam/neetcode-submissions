class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 
        int t, n=nums.size();
        for(int i = 0; i < n; i++){
            t = target-nums[i];
            if(mp[t]){
                return {--mp[t], i}; 
            }
            mp[nums[i]] = i+1; 

        }
        return {};
        
    }
};
