class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={};
        for(int c: s){
            count[c-'a']++;
        }
        for(int c: t){
            count[c-'a']--;
        }
        for(int cnt: count){
            if(cnt!=0)  
                return false;
        }
        return true;
    }
};
