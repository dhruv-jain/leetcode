//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//Given two integers x and y, calculate the Hamming distance.
//Example:
//Input: x = 1, y = 4
//Output: 2
//Author - Dhruv Jain


class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        
        int s =  x ^ y;
        
        while(s!=0)
        {
            if(s%2==1)
            {
                count++;
            }
            s = s/2;
        }
        return count;
        
    }
};
