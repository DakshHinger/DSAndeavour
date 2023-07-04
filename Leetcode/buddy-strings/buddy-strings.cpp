class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]) v.push_back(i);
        }
        if(v.size()!=2 && v.size()!=0){
            return 0;
        }
        if(v.size()==0){
            sort(s.begin(),s.end());
            for(int i=1;i<s.size();i++){
                if(s[i]==s[i-1]) return 1;
            }
            return 0;
        }
        if(s[v[0]]==goal[v[1]] && s[v[1]]==goal[v[0]]) return 1;
        return 0;
    }
};