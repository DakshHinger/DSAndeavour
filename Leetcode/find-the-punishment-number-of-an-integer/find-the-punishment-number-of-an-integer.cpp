class Solution {
    int helper(int ind,string s,int sum){
        if(sum<0) return false;
        if(ind == s.size() && sum==0){
            return true;
        }
        int a=0;
        for(int i=ind; i<s.size();i++){
            a=a*10+(s[i]-'0');
            // cout<<a<<"  ";
            if(a> sqrt(stoi(s))) break;
            if(helper(i+1,s,sum-a)) return true;
        }
        return false;
    }
public:
    int punishmentNumber(int n) {
        vector<int> v(n+1,0);
        int res=0;
        for(int i=1;i<=n;i++){
            int ans= helper(0,to_string(i*i),i);
            if(ans) res+=i*i;
        }
        return res;
    }
};