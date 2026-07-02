class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        short Max_Number = -1;
        for(int i = arr.size()-1; i>=0 ;i--){
             short n = arr[i];
             arr[i] = Max_Number;
             Max_Number = max(Max_Number,n);
        }
        return arr;
    }
};