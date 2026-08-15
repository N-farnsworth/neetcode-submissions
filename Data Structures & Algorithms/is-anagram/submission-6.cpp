class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> t_map;
        unordered_map<char, int> s_map;

        for(char n : t){
            if(t_map.find(n) == t_map.end()){
                t_map[n] = 1;
            }else{
                ++t_map[n];
            }
             
        }
        for(char m : s){
            if(s_map.find(m) == s_map.end()){
                s_map[m] = 1;
            }else{
                ++s_map[m];
            }
        }
        return t_map == s_map;
    
}
};