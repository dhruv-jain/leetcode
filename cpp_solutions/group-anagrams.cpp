//https://leetcode.com/problems/group-anagrams/description/

/* Given an array of strings, group anagrams together.

For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"], 
Return:
[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> umap;
        
        for(int i =0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            umap[temp].push_back(strs[i]);      //sorted keys 
        }
        
        std::vector<std::vector<std::string>> result;
        
        for(unordered_map<string, vector<string>>::iterator it = umap.begin(); it != umap.end(); ++it) {
            result.push_back(it->second);
        }
        return result;        
    }
};
