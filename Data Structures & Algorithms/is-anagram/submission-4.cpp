class Solution {
public:
    bool isAnagram(string s, string t) {
        //for each string, put its char in a map

        unordered_map<char, int> char_s;

        if (s.length() != t.length()){
            return false;
        }

        for(char ch : s){
            char_s[ch]++;
        }

        for(char ch_t : t){
            if(char_s.find(ch_t) == char_s.end()){
                //std::cout <<"jeffrey1";
                return false;
            }

            if(char_s[ch_t] != 0){
                char_s[ch_t]--;
            }
        }

        for(const auto& pair : char_s){
            if(pair.second != 0){
                //std::cout <<"jeffrey3";
                return false;
            }
        }

        return true;

    }
};
