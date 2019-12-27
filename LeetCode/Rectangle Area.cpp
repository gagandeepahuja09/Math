class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        long ans = ((C - A) * (D - B));
        ans += ((G - E) * (H - F));
        long w = (long)min(G, C) - (long)max(A, E);
        long h = (long)min(H, D) - (long)max(B, F);
        if(w > 0 && h > 0) {
            ans -= (long)(w * h);
        }
        return (int)ans;
    }
};
