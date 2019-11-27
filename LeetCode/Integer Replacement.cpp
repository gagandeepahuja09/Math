#define ll long long int

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        ll sum = 0, curr = 0, n = A.size();
        for(int i = 0; i < n; i++) {
            sum += A[i];
            curr += (A[i] * i);
        }
        ll mx = curr;
        for(int i = 0; i < n - 1; i++) {
            curr -= sum;
            curr += (ll)(A[i] * n);
            mx = max(mx, curr);
        }
        return (int)mx;
    }
};
