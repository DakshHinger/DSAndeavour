class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<int> ans;
       long long max  = 0;
        long long min = 0;
        for (int i=0; i<weights.size()-1; i++) {
            ans.push_back(weights[i]+weights[i+1]);
        }
        sort(ans.begin(), ans.end());

        for (int i = 0; i<k-1; i++) {
            min += ans[i];
            max += ans[ans.size()-1-i];
        }
        return max - min;
    }
};