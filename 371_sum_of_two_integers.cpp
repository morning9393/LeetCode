class Solution {
public:
    int getSum(int a, int b) {
        int res = a ^ b;
        int carry = (a & b) << 1;
        int temp = 0;
        while (carry != 0){
            temp = res;
            res = res ^ carry;
            carry = (temp & carry) << 1;
        }
        return res;
    }
};