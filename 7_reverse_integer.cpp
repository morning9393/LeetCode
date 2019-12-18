class Solution {
public:
    int reverse(int x) {
        double res_num = 0;
        while (x != 0) {
            res_num = 10 * res_num + (x % 10);
            if(res_num > 2147483647|| res_num < -2147483647){
                return 0;
            }
            x /= 10;
        }
        return (int)res_num;
    }
};