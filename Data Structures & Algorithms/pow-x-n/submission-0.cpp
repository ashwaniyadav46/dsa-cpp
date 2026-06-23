class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;

        if(N < 0){
            x = 1 / x;
            N = -N;
        }

        double power = 1;

        while(N--){
            power *= x;
        }

        return power;
    }
};