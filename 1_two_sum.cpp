class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int,int> um_map;   //ordered_map needs more time!  multi handles duplicates elmt!
        vector<int> vi;        
        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            auto it=um_map.find(temp);
            if(it!=um_map.end())
            {
                vi.push_back(it->second);
                vi.push_back(i);
            }
            um_map.insert({nums[i],i});
        }
        return vi;
    }
};