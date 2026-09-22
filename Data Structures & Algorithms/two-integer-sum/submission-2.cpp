class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>p,n;
      vector<int>ans;
    
      for(int i=0;i<nums.size(); i++){
        int t=target-nums[i];
        if(t<0 && n[-t]) ans.push_back(--n[-t]), ans.push_back(i);
        else if(t>=0 && p[t]) ans.push_back(--p[t]), ans.push_back(i);

        if(nums[i]<0)n[abs(nums[i])]=i+1;
        else p[nums[i]]=i+1;
      }

      return ans;
    }
};
