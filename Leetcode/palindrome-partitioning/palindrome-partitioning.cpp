class Solution {
private: 
    vector<vector<string>> ans;
    
    int n=0;
    bool palandrome(string s){
        // if(s=="")return false;
        string a=s;
        reverse(s.begin(),s.end());
        if(a == s) {
            return true;
        }
        return false;
    } 

    void solve(int i,string &s,string pal,vector<string> &v){
        // cout<< "hjsbdfhjsgb"<<endl;
        if(i>=n && pal=="") {
            ans.push_back(v);
            return;
        }
        else if(i>=n){
            return;
        }
        pal=pal+s[i];
        if(palandrome(pal)){
            v.push_back(pal);
            solve(i+1,s,"",v);
            v.pop_back();
        }
        solve(i+1,s,pal,v);
    }
public:
    vector<vector<string>> partition(string s) {
        n=s.size();
        vector<string> v;
        solve(0,s,"",v);
        return ans;
    }
};