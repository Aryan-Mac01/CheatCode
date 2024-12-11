class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> p1;
        unordered_map<string, int> p2;
        istringstream in(s); string word;
        int i = 0, n = pattern.size();
        for(string word; in>>word; ++i){
            if(i==n || p1[pattern[i]] != p2[word]) return false;
            p1[pattern[i]] = p2[word] = i+1;
        }
        return i==n;
    }
};