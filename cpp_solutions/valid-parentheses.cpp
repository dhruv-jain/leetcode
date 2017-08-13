//https://leetcode.com/problems/valid-parentheses/description/

#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack <char> brackets;
        for(char c : s){
            switch(c) {
            case '(':
            case '[':
            case '{': brackets.push(c); break;
            case ')': if(brackets.empty() || brackets.top()!='(') return false; else brackets.pop(); break;
            case '}': if(brackets.empty() || brackets.top()!='{') return false; else brackets.pop(); break;
            case ']': if(brackets.empty() || brackets.top()!='[') return false; else brackets.pop(); break;
            default: ; //pass
            }
        }
        return brackets.empty();
    }
};
