class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char, int> ana_s;
        unordered_map<char, int> ana_t;

        if (n!=m) {
            return false;
        }

        for (int i = 0; i < n; i++) {
            if (ana_s.find(s[i]) != ana_s.end()){
                ana_s[s[i]]+=1;
            }
            else {
                ana_s[s[i]]=1;
            }
            
            if (ana_t.find(t[i]) != ana_t.end()){
                ana_t[t[i]]+=1;
            }
            else {
                ana_t[t[i]]=1;
            }
        } 
        
        for (int j = 0; j < n; j++) {
            if (ana_s[s[j]] != ana_t[s[j]]) {
                return false;
            }
        }
        return true;
    }
};
