#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_len = nums.size();
        std::vector<int> res;
        std::unordered_map<int, int> hashmap;
        for(int i=0; i<=nums_len; i++){
            if(hashmap.count(target - nums[i]) > 0){
                res.push_back(hashmap[target - nums[i]]);
                res.push_back(i);
                return res;
            }
            else{
                hashmap[nums[i]] = i;
            }
        }
        return res;
    }
};
