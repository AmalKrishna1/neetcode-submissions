class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set;

        for(int i = 0; i < nums.size(); i++){
            if (nums_set.contains(nums[i])){
                return true;
            } else {
                nums_set.insert(nums[i]);
            }
        }

        return false;
    }
};