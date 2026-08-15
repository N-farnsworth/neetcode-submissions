class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;

        for(size_t i = 0; i < nums.size(); i++){
            if(seen.find(nums[i]) == seen.end()){
                seen[nums[i]];
            }
            else{
                return true;
            }
        }
        return false;
    }
};