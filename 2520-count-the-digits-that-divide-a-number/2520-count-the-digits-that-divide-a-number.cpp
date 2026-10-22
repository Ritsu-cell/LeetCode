class Solution {
public:
    int countDigits(int num) {
        int yes=0;
        int n = num;

    while (n != 0) {
        int rem = n % 10;

        if (rem != 0 && num % rem == 0) {
            yes++;
        }

        n = n / 10;
    }

    return yes;
    }
};