//https://leetcode.com/problems/two-sum/description/
/* Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]. 
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //key value pair, where key is the number in the vector and value is the index
        unordered_map<int, int> hash;
        vector<int> result; 
        for(int i = 0;i<nums.size();i++){ 
            int numToFind = target - nums[i];  //numToFind = 9-2=7, so we have to find 7. 
            //if number is found in the ma return it
            if(hash.find(numToFind) !=hash.end()){
                result.push_back(hash[numToFind]);
                result.push_back(i);
                return result; 
            }
            hash[nums[i]] = i;
        } 
        return result;
    }
};

//O(n) since unordered map has O(n) complexity. 
