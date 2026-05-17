class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::map<std::vector<int>, std::vector<std::string>> hmap;
        std::vector<std::vector<std::string>> gans;
        for(std::string word: strs){
            std::vector<int> word_key(26, 0);
            for(char c: word){
                int char_ascii = static_cast<int>(c) - 97;
                word_key[char_ascii]++;
            }
            hmap[word_key].push_back(word);
        }

        for(const auto& [key, value]: hmap){
            gans.push_back(value);
        }

        return gans;
    }
};
