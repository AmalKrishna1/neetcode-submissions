class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> array_of_ints;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    array_of_ints.push_back(i);
                    array_of_ints.push_back(j);
                }
            }
        }

        return array_of_ints;
    }
};
