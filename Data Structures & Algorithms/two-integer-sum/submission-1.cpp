class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]= i;
        }
        for(int i=0; i<nums.size(); i++){
            int rest = target - nums[i];
            if(mp.find(rest)!=mp.end()){
                if(i!= mp[rest])
                    return {i, mp[rest]};
            }
        }
        return {};
    }
};
