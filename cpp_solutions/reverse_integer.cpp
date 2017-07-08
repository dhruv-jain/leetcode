/*Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
*/


class Solution {
public:
    int reverse(int x) {
        int sum=0;
        while(x!=0){
                if(sum>INT_MAX/10 || sum<INT_MIN/10)return 0;

            sum=sum*10+x%10;
            x=x/10;
            
        }
        return sum;
    }
};
