class Solution {
public:
    int compress(vector<char>& chars) {
        chars.push_back('0');
        int ans=0;
        int count=1;
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                count++;
            }
            else{
                chars[ans++]=chars[i-1];
                if(count!=1){
                    string c= to_string(count);
                    for(int j=0;j<c.size();j++){
                        chars[ans++]= c[j];
                    }
                }
                count=1;
            }
        }
        return ans;
    }
};