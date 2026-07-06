class Solution {
public:
    int reverse(int x) {
        long long revn = 0;

        while (x != 0) {
            int last = x % 10;
            x /= 10;
            revn = revn * 10 + last;
        }

        if (revn > INT_MAX || revn < INT_MIN)
            return 0;

        return (int)revn;
    }
};