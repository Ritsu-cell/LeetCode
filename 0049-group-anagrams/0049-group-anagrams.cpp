class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>pair;
        unordered_map<string, vector<string>>ut;

        for(auto i:strs){
            string temp=i;
            sort(i.begin(),i.end());
            ut[i].push_back(temp);
        }
        for(auto i:ut){
            pair.push_back(i.second);
        }
        return pair;

    }
};