int gcd(int a, int b) {
if(a == 0 || b == 0)
    return 0;
if(a == b)
    return a;
if(a < b)
    return gcd(a, b - a);
return gcd(a - b, b);    
}

int Solution::cpFact(int A, int B) {
while(gcd(A, B) != 1) {
    A = A / gcd(A, B);
}
return A;
}


