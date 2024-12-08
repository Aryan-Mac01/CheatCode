//Single pointer approach using string split

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream iss(sentence);
        string word;
        int i = 0;

        while(iss>>word){
            if(word.find(searchWord) == 0){
                return i+1;
            }
            i++;
        }
        return -1;

    }
};