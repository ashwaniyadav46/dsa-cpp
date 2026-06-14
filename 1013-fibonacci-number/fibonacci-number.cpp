class Solution {
public:
    int fib(int n) {
    if (n == 1 || n == 0) return n;
    int prev_2 = 0;
    int prev_1 = 1;
    for(int i = 2; i <= n; i++){
        int curr = prev_2 + prev_1;
        prev_2 = prev_1;
        prev_1 = curr;
    }
    return prev_1;
    }
    
};