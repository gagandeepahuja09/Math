/*Given an integer A which denotes the number of people standing in the queue.

A selection process follows a rule where people standing on even positions are selected.
Of the selected people a queue is formed and again out of these only people on even
position are selected.

This continues until we are left with one person. Find and return the position of that
person in the original queue.
*/

int msbPos(int A) {
    int pos = 0;
    while(A) {
        A  = A / 2;
        pos++;
    }
    return pos;
}

int Solution::solve(int A) {
    int pos = msbPos(A);
    return 1 << (pos - 1);
}

