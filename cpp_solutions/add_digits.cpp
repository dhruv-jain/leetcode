//Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

class Solution {
public:
    int addDigits(int num) {
        
        int sum = 0,r;
        int v = num;
        while (v!= 0){
        r = v%10;  
        sum = sum + r;
        v=v/10;
        }
        //cout<<sum;
        if(sum/10 == 0) return sum;
        return addDigits(sum);
    }
};
