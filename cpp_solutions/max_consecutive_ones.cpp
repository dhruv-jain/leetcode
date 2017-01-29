//Given a binary array, find the maximum number of consecutive 1s in this array.

//Input: [1,1,0,1,1,1]
//Output: 3

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int result = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else {
                result = max(result, count);
                count = 0;
            }
        }
            if(count) return max(result, count);
            return result;

    }

};
