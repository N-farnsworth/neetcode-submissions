class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for(size_t i = 0; i < nums.size(); i++){
            if(mpp.find(target - nums[i]) != mpp.end()){
                return {mpp[target - nums[i]], static_cast<int>(i)};
            }
            if(mpp.find(nums[i]) == mpp.end()){
                mpp[nums[i]] = i;
            }
            

        }
        return {};
    }
};
