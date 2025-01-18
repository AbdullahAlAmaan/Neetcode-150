class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int sum=0;
        for (int i=0;i<32;i++){
            int bit=(n>>i)&1;
            sum |= bit << (31-i); // this is to change the bit to the correct position
        }
        return sum;
    }
};
