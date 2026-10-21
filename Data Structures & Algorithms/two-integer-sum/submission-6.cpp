class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(), nums.end());


        unordered_map<int, int> observed_nums;
        observed_nums.reserve(nums.size());
        vector<int> array_of_ints;

        for(int i = 0; i < nums.size(); i++){
            int curr_num = nums[i];
            int complement = target - curr_num;

            auto complement_ind = observed_nums.find(complement);
            if(complement_ind != observed_nums.end()){
                return {complement_ind->second, i};
            }

            observed_nums[curr_num] = i;
        }
    }
};
