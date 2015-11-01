class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;
        return n<0? 1/power(x, -n):power(x, n);
    }
    
    double power(double x, int n){
        if(n == 0) return 1;
        if(n == 1) return x;
        double tmp = 1.0;
        tmp *= myPow(x, n/2);
        if(n % 2 == 0) tmp *= tmp;
        else tmp *= tmp * x;
        return tmp;
    }
};
