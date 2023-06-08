class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char> mp;
        map<char,char> rmp;
        for(int i=0;i<t.size();i++){
            if (mp.find(t[i])==mp.end()){
                if(rmp.find(s[i]) != rmp.end()){
                    return false;
                }
                mp[t[i]]=s[i];
                rmp[s[i]]=t[i];
            }else{
                if(mp[t[i]]!=s[i]) return false;
            }
        }
        return true;
    }
};