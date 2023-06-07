class Solution {
    string singleinstance(string n){
        string s;
        s+=n[0];
        for(int i=1;i<n.size();i++){
            if(n[i]!=n[i-1]) s+=n[i];
        }
        return s;
    }
public:
    bool isLongPressedName(string name, string typed) {
        string nam=singleinstance(name);
        string type=singleinstance(typed);
        if(nam!=type) return false;
        int p1=0,p2=0;   // p1 for name string and p2 for typed
        int c=0;                           // counts number of matched char
        while(p2<typed.length()){                 //loop until typed string gets over
            if(name[p1]==typed[p2]){               // if charachter matches move pointers ahead
                p1++;                                               //and increment the char count
                p2++;
                c++;
                continue;
            } 
            p2++;                                           //else continue traversal
        }
        return c==name.length();                 //finally if count matches the name length
    }
};