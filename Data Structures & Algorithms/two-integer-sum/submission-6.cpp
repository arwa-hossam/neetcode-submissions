class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int t;
        for(int i=0; i<nums.size(); i++){
            t=target-nums[i];
            if(mp.contains(t))return{mp[t],i};
            mp[nums[i]]=i;
        }
     return {};
    }
};
