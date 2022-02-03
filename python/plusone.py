#https://leetcode.com/problems/plus-one/solution/
#You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
#The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

#Increment the large integer by one and return the resulting array of digits.

#Example 1:

#Input: digits = [1,2,3]
#Output: [1,2,4]

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n=len(digits)
        for i in range(n):
            idx = n-1-i
            if  digits[idx]==9:
                digits[idx]=0
            else:
                digits[idx]+=1
                return digits
            
        return[1]+digits
        
        
