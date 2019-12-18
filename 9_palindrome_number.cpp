class Solution {
public:
    bool isPalindrome(int x) {
        bool isPalindrome = true;
        stringstream ss;
        ss<<x;
        string str = ss.str();
        for(int i = 0,j = str.size()-1;i < j;i++,j--){
            if(str[i] != str[j]){
                isPalindrome = false;
            }
        }
        
        return isPalindrome;
    }
};