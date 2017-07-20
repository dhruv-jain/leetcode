//https://leetcode.com/problems/array-partition-i/#/description

/*Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i+=2){
            sum=sum+nums[i];
            
        }
        
      return sum;  
        
    }
};
