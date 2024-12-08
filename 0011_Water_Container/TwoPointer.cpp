class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0, rp=height.size()-1, maxWater = INT_MIN;
        while(lp<rp){
            int w=rp-lp;
            int ht = min(height[lp], height[rp]);
            int currHeight = w*ht;
            maxWater = max(currHeight, maxWater);
            height[lp]<height[rp] ? lp++ : rp--;
            
        }
        return maxWater;
    }
};