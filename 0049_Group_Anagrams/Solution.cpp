class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mymap;
        string temp;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        vector<vector<string>> result;
        for(auto i=mymap.begin(); i!=mymap.end(); ++i){
            result.push_back(i->second);
        }
        return result;
    }
};