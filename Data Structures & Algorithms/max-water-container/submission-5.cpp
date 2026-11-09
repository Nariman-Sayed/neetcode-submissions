class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int mx = 0;
        int ans = 0;
        while(l<=r){
          ans = min(heights[l],heights[r])*(r-l);
          mx = max(ans,mx);

          if(heights[l]<heights[r])
          l++;
          else
          r--;
        }
        return mx;    
    }
};
