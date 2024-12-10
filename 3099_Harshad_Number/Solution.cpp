class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int n = x;
        while(n){
            sum += n%10;
            n = n/10;
        }
        return (x%sum==0) ? sum : -1; 
    }
};