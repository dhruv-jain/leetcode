//https://leetcode.com/problems/judge-route-circle/
/* Initially, there is a Robot at position (0, 0). Given a sequence of its moves,
judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. 
The valid robot moves are R (Right), L (Left), U (Up) and D (down). 
The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true
Example 2:
Input: "LL"
Output: false
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int v = 0;
        int h = 0;
        
        for (char ch : moves) {
            switch(ch) {
                case 'U': v++; break;
                case 'D': v--; break;
                case 'L': h--; break;
                case 'R': h++; break;
            }
        }
         return v==0 && h==0;
    }
};
