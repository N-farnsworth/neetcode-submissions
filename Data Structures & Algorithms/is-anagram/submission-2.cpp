class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> t_map;
        unordered_map<char, int> s_map;

        for(char n : t){
            t_map[n];
            ++t_map[n]; 
        }
        for(char m : s){
            s_map[m];
            ++s_map[m];
        }

        return t_map == s_map;
        
    }
    
};
