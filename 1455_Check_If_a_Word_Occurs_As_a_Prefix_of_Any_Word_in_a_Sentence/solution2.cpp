//double pointer approach

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int currPos = 1, i=0, n=sentence.length();
        while(i<n){
            while(i<n && sentence[i] == ' '){
                currPos++;
                i++;
            }
            int j=0;
            while(i<n && j<searchWord.length() && sentence[i] == searchWord[j]){
                i++;
                j++;
            }
            if(j==searchWord.length()) return currPos;
            while(i<n && sentence[i] != ' ') i++;
        }
        return -1;

    }
};