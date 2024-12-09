class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] >= 1){
                vec.push_back(nums[i]);
                continue;
            }
            mp[nums[i]]++;
            
        }
        return vec;
    }
};