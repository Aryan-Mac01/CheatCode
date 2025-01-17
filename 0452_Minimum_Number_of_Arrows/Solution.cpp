class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int lastPoint = points[0][1];
        int ans = 1;
        for(auto point:points){
            if(point[0]>lastPoint){
                ans++;
                lastPoint = point[1];
            }
            lastPoint = min(point[1], lastPoint);
        }
         return ans;
    }
   
};