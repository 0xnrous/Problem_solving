class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        hash_map = {} 
        for i in arr :
            hash_map [i] = hash_map.get(i,0) + 1

        return len(set(hash_map.values())) == len(hash_map.keys())