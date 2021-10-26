class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        #brute force will be o(n3) find all substrings 
        #find repeating char and keep adding 1
        #use dictionary to find if you come across same char 
        
        if len(s) ==0:
            return 0 
        
        map = {}
        max_length = start = 0 
        
        for i in range(len(s)):
            if s[i] in map and start <= map[s[i]]:
                start = map[s[i]] + 1 
            else:
                max_length = max(max_length, i -start+1)
            
            map[s[i]] = i 
        return (max_length)
