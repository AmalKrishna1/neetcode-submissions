class Solution {
public:
    int singleNumber(vector<int>& nums) {

        std::sort(nums.begin(), nums.end());
        int single_number = 0; //set a variable for tracking
 
        for (int num : nums){ //navigate through the for loop
            //Run XOR on EVERY value in the for loop to evaluate for the single number.
            //This will evaluate out to that valid single number because of the XOR properties.
            //Since there will always be an even number excluding the one single, that specific section
            //will always evaluate to zero, thus the only true remaining value will be a that individual
            //single number.
            //e.g.

            /*
                4 - 100
                1 - 001
                2 - 010
                1 - 001
                2 - 010

                Alright, so in the above, looking specifically at column three, the - 1, 0, 1, 0 sequece will
                all evaluate to 0 leaving just the 0 at the top for the single number four. That 0 XOR'd with 
                the accumulated 0 will output a 0. This is the logic for all three columns eventually reaching
                a total sum of 100 which is 4, the correct output.
            */
            single_number ^= num;
        }
            return single_number;
    }
};
