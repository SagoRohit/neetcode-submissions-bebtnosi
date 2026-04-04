class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n: nums){
            mp[n]++;
        }
        for(auto num: mp){
            if(num.second==1)
                return num.first;
        }
        return 0;
    }
};
