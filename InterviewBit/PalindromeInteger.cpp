int Solution::isPalindrome(int A) {
    if(A < 0)
        return false;
    int divs = 1;
    int num = A;
    while(A >= 10) {
        A /= 10;
        divs *= 10;
    }
    A = num;
    while(A) {
        if(A / divs != A % 10)
            return false;
        A = (A % divs) / 10;    
        divs /= 100;    
    }
    return true;
}

