class KthLargest {
private:
   priority_queue<int,vector<int>,greater<int>> pr;
   int K;
public:
    KthLargest(int k, vector<int>& nums) :K(k) {
        for(auto it:nums){
            pr.push(it);
        }
        while(pr.size()>K)
        pr.pop();
    }
    
    int add(int val) {
        pr.push(val);

        if(pr.size()>K)
        pr.pop();

        return pr.top();
    }
};
