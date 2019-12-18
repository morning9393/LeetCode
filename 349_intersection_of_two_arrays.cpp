class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    for (int i = 0; i < nums1.size(); i++) {
        if (map1.find(nums1[i]) == map1.end()) {
            map1.insert({nums1[i], nums1[i]});
        }
    }

    for (int j = 0; j < nums2.size(); j++) {
        if (map1.find(nums2[j]) != map1.end()) {
            if (map2.find(nums2[j]) == map2.end()) {
                res.push_back(nums2[j]);
                map2.insert({nums2[j], nums2[j]});
            }
        }
    }

    return res;
    }
};