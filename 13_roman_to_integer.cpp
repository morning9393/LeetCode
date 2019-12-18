class Solution {
public:
    int toNumber(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int res = toNumber(s[s.size()-1]);
        for(int i = s.size()-1; i > 0 ; ){
            i--;
            int it = toNumber(s[i]);
            if(it < toNumber(s[i+1])){
                res -= it;
            } else {
                res += it;
            }
        }
        return res;
    }
};