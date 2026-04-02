#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> hashmap;
        int s_len = s.length();
        int t_len = t.length();
        for(int i=0; i < s_len; i++){
            if(hashmap.count(s[i]) == 0){
                hashmap[s[i]] = 0;
            }
            hashmap[s[i]] += 1;
        }
        for(int j=0; j < t_len; j++){
            if(hashmap[t[j]] == 0){
                hashmap[t[j]] = 0;
            }
            hashmap[t[j]] -= 1;
        }

        for(const auto& [chr, cnt]: hashmap){
            if(cnt != 0){
                return false;
            }
        }

        return true;
    }
};
