class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(string s : strs){

            int count[26] = {0};
            makeSignature(s, count);
            string key;
            for(int i = 0; i < 26; i++){
                key += "#" + to_string(count[i]);
            }
            mpp[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& entry : mpp){
            result.push_back(entry.second);
        }
        return result;
        
    }
    // Makes frequency signature
    void makeSignature(const string& s, int count[26]){
        for(char c : s){
            count[c - 'a']++;
        }
    }
};
