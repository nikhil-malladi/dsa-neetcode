class Solution {
    public:
        void dfs(std::vector<int>& nums, int idx, std::vector<int> subarray, int nums_size, std::vector<std::vector<int>>& output){
            if(idx >= nums_size){
                output.push_back(subarray);
                return;
            }
            dfs(nums, idx + 1, subarray, nums_size, output);
            subarray.push_back(nums[idx]);
            dfs(nums, idx + 1, subarray, nums_size, output);
        }

        std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
            std::vector<std::vector<int>> output = {};
            std::vector<int> subarray = {};
            int nums_size = nums.size();
            dfs(nums, 0, subarray, nums_size, output);
            return output;
        }
};