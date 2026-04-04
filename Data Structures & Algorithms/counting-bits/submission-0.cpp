class Solution {
public:
    int count(int n){
        int cnt=0;
        while(n){
            if(n&1)
                cnt++;
            n>>=1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0; i<=n; i++){
            result.push_back(count(i));
        }
        return result;
    }
};
