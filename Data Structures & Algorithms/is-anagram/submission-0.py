class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        hash_map_s = {}

        for char in s:
            hash_map_s[char] = hash_map_s.get(char, 0) + 1

        hash_map_t = {}

        for char in t:
            hash_map_t[char] = hash_map_t.get(char, 0) + 1

        is_match = hash_map_s == hash_map_t
        
        return is_match