/*
No. Of Open Doors

Given an integer A which denotes the number of doors in a row numbered 1 to A.

All the doors are closed initially. A person moves to and fro changing the states of the doors as follows: the person opens a door that is already closed and closes a door that is already opened.

In the first go, the person alters the states of doors numbered 1, 2, 3, … , A.

In the second go, she alters the states of doors numbered 2, 4, 6 …

In the third go, she alters the states of doors numbered 3, 6, 9 …

This continues till the A'th go in which you alter the state of the door numbered A.*/

/*bool oddDivisors(int n) {
    int sq = sqrt(n);
    return (sq * sq == n);
}*/

int Solution::solve(int A) {
    /*int cnt = 0;
    for(int i = 1; i <= A; i++) {
        if(oddDivisors(i))
            cnt++;
    }*/
    return sqrt(A);
}

