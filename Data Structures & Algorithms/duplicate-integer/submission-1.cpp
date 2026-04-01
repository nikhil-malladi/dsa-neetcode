#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashmap;
        int nums_len = nums.size();
        for(int i=0; i < nums_len; i++){
            if(hashmap.contains(nums[i])){
                return true;
            }
            hashmap[nums[i]] = 0;
        }
        return false;
    }
};