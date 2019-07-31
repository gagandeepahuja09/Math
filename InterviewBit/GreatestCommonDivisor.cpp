int Solution::gcd(int A, int B) {
    if(A == 0)
        return B;
    if(A > B)
        return gcd(B, A);
    return gcd(B % A, A);    
}

