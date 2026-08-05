class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx = 0;
        int l = 0;
        int r = heights.size()-1;
        while(l<=r){
            int ans = 
         min(heights[l],heights[r])*(r-l);
          mx = max(mx,ans);
          if (heights[l]<heights[r])
          l++;
          else
          r--;
        }
        return mx;
    }
};
