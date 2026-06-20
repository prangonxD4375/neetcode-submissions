class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> m;

        for(auto &str :strs){
            string m2 =str;
            sort(m2.begin(),m2.end());

            m[m2].push_back(str);

        }
        
        vector<vector<string>> result;

        for (auto &vec : m){
            result.push_back(vec.second);

        }

        return result;
        
    }
};
