#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> hmap = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
        };
        int s_len = s.length();
        for(int i=0; i < s_len; i++){
            if(hmap.count(s[i]) > 0){
                st.push(s[i]);
            }
            else{
                int st_len = st.size();
                if(st_len <= 0){
                    return false;
                }
                char open = st.top();
                st.pop();
                char ideal_close = hmap[open];
                char curr_close = s[i];
                if(ideal_close != curr_close){
                    return false;
                }
            }
        }
        if(st.size() > 0){
            return false;
        }
        return true;
    }
};
