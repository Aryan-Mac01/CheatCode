class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=INT_MIN;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int w = j-ii;
                int ht = min(height[i],height[j]);
                int currHei = w*ht;
                maxWater = max(maxWater, currHei);
            }

        }
        return maxWater;
    }
};