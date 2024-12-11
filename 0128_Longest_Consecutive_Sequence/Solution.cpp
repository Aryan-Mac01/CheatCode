class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int largest = 1;
        
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]); 
        }
        for(auto a: st){
            if(st.find(a-1) == st.end()){
                int cnt = 1;
                int x = a;
                while(st.find(x+1) != st.end()){
                    x = x+1;
                    cnt = cnt+1;
                }
                largest = max(largest, cnt);
            }
        }
        return largest;
    }
};