class Solution {
public:
    int strStr(string haystack, string needle) {
    int ret = -1;
    if (needle.size() == 0) {
        return 0;
    }
    
    int size = (int) (haystack.size() - needle.size()) + 1;
    for (int i = 0; i < size; i++) {
        if (haystack[i] == needle[0]) {
            bool isMatch = true;
            for (int j = 1; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) {
                ret = i;
                break;
            }
        }
    }

    return ret;
    }
};