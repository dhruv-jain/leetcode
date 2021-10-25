#Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]]
#such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        res = [] #empty array to store the result 
        nums.sort()
        
        length = len(nums) # length of the "nums" which is a list
        
        for i in range(length-2): #-2 coz two pointers left right which will be ahead of ith 
            if i > 0 and nums [i]==nums[i-1]: # i array is all 0s
                continue 
            l = i +1 
            r = length -1 
            
            while l<r: 
                total = nums[i] + nums[l] + nums[r]
                
                if total < 0: #array is sorted this means that you can move the left to + 1 
                    l = l+1
                elif total > 0:
                    r = r-1
                    
                else:
                    res.append([nums[i], nums[l],nums[r]])
                
                #l and r also needs to be unique 
                    while l<r and nums[l]==nums[l+1]:
                        l = l+1
                    while l<r and nums[r]==nums[r-1]:
                        r=r-1
                    
                    l = l+1
                    r = r-1
            
        return res
