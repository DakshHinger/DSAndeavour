class Solution {
public:
    int minLength(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(ans.size()==0) ans.push_back(s[i]);
            else if(s[i]=='B' && *ans.rbegin()=='A') ans.pop_back();            
            else if(s[i]=='D' && *ans.rbegin()=='C') ans.pop_back(); 
            else ans.push_back(s[i]);
        }
        return ans.size();
    }
};