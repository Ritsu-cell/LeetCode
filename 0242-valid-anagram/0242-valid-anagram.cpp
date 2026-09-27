class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
    return false;
}
       unordered_map<char,int>s1;
       for(int i=0; i<s.length(); i++){
        s1[s[i]]++;
       }
       unordered_map<char,int>t1;
       for(int i=0; i<t.length(); i++){
        t1[t[i]]++;
       }

       for(auto i:s1){
        char c=i.first;
        int hs=i.second;
        int ht=t1[c];

        if(ht!=hs){
            return false;
        }

       }
        return true;
        
        
    }
};