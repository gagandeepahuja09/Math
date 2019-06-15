/*
Amazing Binary Sequences

Let say you have an array Arr which only consists of 0 and 1s . An amazing binary sequence in this array is of a triplet (i, j, k) such that i < j < k and Arr[i] = 1, Arr[j] = 0 and Arr[k] = 1.

You are given a number A. You have to construct and return the array Arr such that the number of amazing sequence in Arr is exactly equal to A. Note that Arr can only contain 0 and 1. you can assume that the length of Arr will be less than 350.

If there are multiple such arrays possible, return the one with the minimum length. If there are multiple solutions possible with the same minimum length, return the lexicographically smallest one. If there is no such array which satisfies the above condition, return an empty array.*/

vector<int> Solution::solve(int A) {
    vector<int> ret, factors;
    ret.push_back(1);
    int b = -1, c = -1, l = INT_MAX;
    for(int i = 1; i <= A; i++) {
        if(A % i == 0) {
            factors.push_back(i);
            factors.push_back(A / i);
        }
    }
    for(int i = 0; i < factors.size(); i++) {
        int tempb = factors[i];
        int tempc = A / factors[i];
        if(tempb + tempc < l || (tempb + tempc == l && tempb > b)) {
            l = tempb + tempc;
            b = tempb;
            c = tempc;
        }
    }
    for(int i = 0; i < b; i++)
    ret.push_back(0);
    for(int i = 0; i < c; i++)
    ret.push_back(1);
    return ret;
}

