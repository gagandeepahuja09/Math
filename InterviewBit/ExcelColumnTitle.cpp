string Solution::convertToTitle(int A) {
    string ret;
    while(A) {
        // A--;
        ret = (char)((A - 1)% 26 + 'A') + ret;
        A /= 26;
    }
    return ret;
}

