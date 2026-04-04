class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string bit;
        for(int i=0; i<32; i++){
            if(n&1)
                bit.push_back('1');
            else
                bit.push_back('0');
            n>>=1;
        }
        cout<<bit<<endl;
        uint32_t result=0;
        for(int i=0; i<32; i++){
            if(bit[i]=='1'){
                result += pow(2, (31-i));
            }
        }
        return result;
    }
};
