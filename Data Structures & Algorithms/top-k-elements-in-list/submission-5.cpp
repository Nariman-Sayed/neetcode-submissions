
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        vector<vector<int>> buckets(n + 1);

        for (auto it : mp) {
            buckets[it.second].push_back(it.first);
        }

        vector<int> ans;

        for (int i = n; i >= 1; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};