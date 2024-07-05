class Solution:
    def countQuadruplets(self, nums: List[int]) -> int:
        count = 0
        n = len(nums)
        for i in range(n-3):
            for j in range(i+1,n-2):
                for k in range(j+1,n-1):
                    for z in range(k+1,n):
                        if nums[i]+nums[j]+ nums[k]== nums[z]:
                            count+=1
        return count
    
#method 2
    
import itertools
from typing import List

class Solution:
    def countQuadruplets(self, nums: List[int]) -> int:
        return sum(1 for a, b, c, d in itertools.combinations(nums, 4) if a + b + c == d) 
