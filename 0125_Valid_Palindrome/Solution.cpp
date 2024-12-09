class Solution {
public:

    bool isAlpha(char ch){
        if(ch >= '0' && ch<= '9' || (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int s1 = 0;
        int s2 = s.length()-1;
        while(s1<s2){
            if(!isAlpha(s[s1])){
                 s1++;
                 continue;
            }
            if(!isAlpha(s[s2])){
                s2--;
                continue;
            }
            if(tolower(s[s1]) != tolower(s[s2])){
                return false;
            }
            s1++;
            s2--;

        }
        return true;
    }
};