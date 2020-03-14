void Solution::arrange(vector<int> &A) {
    int n = A.size(); 
    for(int i = 0; i < n; i++) {
        A[i] *= n;
    }
    for(int i = 0; i < n; i++) {
        int curr = A[i] / n;
        int replace = A[curr] / n;
        A[i] += replace;
    }
    for(int i = 0; i < n; i++) {
        A[i] %= n;
    }
}
