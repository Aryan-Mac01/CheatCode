class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int s1 = coordinate1[0]-'a'+coordinate1[1]-'0';
        int s2 = coordinate2[0]-'a'+coordinate2[1]-'0';
        if(s1%2 == s2%2){
            return 1;
        }
        return 0;
    }
};