class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:   
        word_map = {}

        for word in strs:
            character_count = [0] * 26

            for char in word:
                char_index = ord(char) - ord('a')
                character_count[char_index] += 1

            numerical_rep = tuple(character_count)

            if numerical_rep not in word_map:
                word_map[numerical_rep] = []

            word_map[numerical_rep].append(word)

        return list(word_map.values())