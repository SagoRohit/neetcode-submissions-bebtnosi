class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result=0;
        for(int i=0; i<32; i++){
            result <<=1;  // here we left result to make space for the next bit
            result |= (n&1); // getting the last bit of n
            n>>=1; // now shifting n to right 1 bit
        }
        return result;
    }
};
