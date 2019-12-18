class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string max_str;
        string temp_str = string(s,0,1);
        for(int i = 1; i < s.size(); i++){
            int pos = temp_str.find(s[i]);
            if(pos != string::npos){
                if(temp_str.size() > max_str.size()){
                    max_str = temp_str;   
                }
                temp_str = temp_str.erase(0,pos+1);
            }
            temp_str += s[i];
        }
        if(temp_str.size() > max_str.size()){
            max_str = temp_str;
        }
        return max_str.size();
    }
};