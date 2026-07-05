class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        is_match = Counter(s) == Counter(t)
        
        return is_match