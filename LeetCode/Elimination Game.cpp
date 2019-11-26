class Solution {
public:
    int lastRemaining(int n) {
        bool left = true;
        int remaining = n, step = 1, head = 1;
        while(remaining > 1) {
            if(left || remaining % 2 == 1) {
                head += step;
            }
            remaining = remaining / 2;
            step *= 2;
            left = !left;
        }
        return head;
    }
};
