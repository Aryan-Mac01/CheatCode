class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans;
        int n = s.length();
        int charInSection = 2*(numRows-1);
        for(int currRow = 0;currRow<numRows;currRow++){
            int index = currRow;
            while(index<n){
                ans+=s[index];
                if(currRow!=0 && currRow!=numRows-1){
                    int charInBetween = charInSection-2*(currRow);
                    int secondIndex = index+charInBetween;
                    if(secondIndex<n){
                        ans+=s[secondIndex];
                    }
                }
                index+=charInSection;
            }
        }
        return ans;
    }
};