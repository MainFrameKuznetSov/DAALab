class Solution {
public:
    bool isPowerOfTwo(int x) {
        return (x>0 && (x&(x-1))==0);
    }
};