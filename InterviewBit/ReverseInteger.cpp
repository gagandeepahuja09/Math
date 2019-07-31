#define ll long long int

int Solution::reverse(int A) {
    ll ret = 0;
    while(A) {
        ret *= 10;
        ret += (A % 10);
        A /= 10;
    }
    if(ret < INT_MIN || ret > INT_MAX)
        return 0;
    return (int)ret;
}

