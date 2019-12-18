class Solution {
public:
    bool isValid(string s) {
    bool res = true;
    stack<char> stack;
    char ch;
    for (int i = 0; i < s.length(); i++) {
        ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        } else if (ch == ')') {
            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
            } else {
                res = false;
                break;
            }
        } else if (ch == '}') {
            if (!stack.empty() && stack.top() == '{') {
                stack.pop();
            } else {
                res = false;
                break;
            }
        } else {
            if (!stack.empty() && stack.top() == '[') {
                stack.pop();
            } else {
                res = false;
                break;
            }
        }
    }

    if(!stack.empty() && res){
        res = false;
    }

    return res;
    }
};