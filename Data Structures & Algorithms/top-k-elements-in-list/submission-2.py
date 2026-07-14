class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Returns the count of elements for each unique num
        freq_map = Counter(nums)
        
        # freq_map.most_common(k) - retrieves the top k most frequent elements, returned as a list of tuples in the format (element, frequency)
        # List Comprehension [num for num, _ in....]
        # num extracts the first part of each tuple (the element itself)
        # _ is a throwaway variable used by convetion for the second part (the count/frequency)
        return [num for num, _ in freq_map.most_common(k)]
