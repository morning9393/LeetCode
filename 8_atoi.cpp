class Solution {
public:
    int myAtoi(string str) {
        double res = 0;
        bool is_negative = false;
        int i = 0;
        int leng = (int) str.size();
        while (i < leng) {
            if (i == 0) {
                if (str[i] == '+') {
                    i++;
                    continue;
                } else if (str[i] == '-') {
                    is_negative = true;
                    i++;
                    continue;
                } else if (str[i] == ' ') {
                    str.erase(i,i+1);
                    leng = (int)str.size();
                    continue;
                }
            }
            int num = str[i] - 48;
            if (num > 9 || num < 0) {
                break;
            }
            res = res * 10 + num;
            if (res > INT_MAX){
                res = is_negative ? INT_MAX+1 : INT_MAX;
                break;
            }
            i++;
        }
        if (is_negative) {
            res = 0 - res;
        }
        return (int)res;
    }
};