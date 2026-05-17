class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> hmap;
        std::vector<std::vector<std::string>> gans;
        for(std::string word: strs){
            std::string word_key(26, '0');
            for(char c: word){
                int char_ascii = static_cast<int>(c) - 97;
                int posnum = word_key[char_ascii] - '0';
                posnum ++;
                word_key[char_ascii] = static_cast<char>(posnum + '0');
            }
            hmap[word_key].push_back(word);
        }

        for(const auto& [key, value]: hmap){
            gans.push_back(value);
        }

        return gans;
    }
};
