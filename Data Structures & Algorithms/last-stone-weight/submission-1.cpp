class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto s:stones){
          q.push(s);
        }
        while(q.size()>1){
            int y = q.top();
            q.pop();
            int x =q.top();
            q.pop();
            int res = y-x;
            if(res)
            q.push(res);
        }
        if(!q.empty())
        return q.top();
        return 0;
    }
};
