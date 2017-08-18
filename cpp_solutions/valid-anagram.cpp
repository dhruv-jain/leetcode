//https://leetcode.com/problems/valid-anagram/description/ 
/* Given two strings s and t, write a function to determine if t is an anagram of s.
For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false. */

//METHOD 1 (SORTING)

#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if (s==t) return true;
        else return false;
        
    }
};
