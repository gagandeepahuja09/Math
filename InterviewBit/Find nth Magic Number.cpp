Given an integer A, find and return the A'th magic number.

A magic number is defined as a number which can be expressed as a power of 5 or sum of unique powers of 5.

int Solution::solve(int A) {
    int ans = 0, pow = 1;
    while(A) {
        pow *= 5;
        if(A & 1) {
            ans += pow;
        }
        A = A / 2;
    }
    return ans;
}

