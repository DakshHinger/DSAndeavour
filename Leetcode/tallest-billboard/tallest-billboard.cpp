class Solution {
public:
    map<pair<int, int>, long long> mp;
    long long helper(vector <int> &rods, int i, int f) {   
        if(i >= rods.size()) {           
            if(f == 0) {                
                return 0;
            }
            return INT_MIN;
        }
        
        if(mp.find({i, f}) != mp.end()) {
            return mp[{i, f}];
        }
      
     //dont include any
      long a =   helper(rods, i + 1, f);
        //include into first subset
      long b = rods[i] +  helper(rods, i + 1, f + rods[i]);
        //include into second subset
      long c = rods[i] + helper(rods, i + 1, f - rods[i]);
        
      return mp[{i, f}] =  max({a, b, c});
    }
    int tallestBillboard(vector<int>& rods) {
       return helper(rods, 0, 0)/2; 
    }
};