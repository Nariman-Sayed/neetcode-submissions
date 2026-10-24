
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;

        for (char task : tasks) {
            freq[task]++;
        }

        priority_queue<int> max_heap;
        queue<pair<int, int>> q;

        for (auto& [task, count] : freq) {
            max_heap.push(count);
        }

        int time = 0;

        while (!max_heap.empty() || !q.empty()) {
            time++;

            if (!max_heap.empty()) {
                int top = max_heap.top();
                max_heap.pop();

                top--;

                if (top > 0) {
                    q.push({top, time + n});
                }
            }

            if (!q.empty() && q.front().second == time) {
                max_heap.push(q.front().first);
                q.pop();
            }
        }

        return time;
    }
};
