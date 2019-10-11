/*Ukulele Maestro

Rishik has a very special Ukulele with A frets. 
He can use atmost 4 fingers to play a chord. 
Find total number of different chords Rishik can play mod 1000000007. 
Two chords are different if one of the fret that is pressed in one of the chord is not
pressed in other chord.
*/

#define ll long long int

ll power(ll a, ll b, ll MOD) {
    if(b == 0)
        return 1;
    if(b % 2)
        return (a % MOD * power(a, b - 1, MOD) % MOD) % MOD;
    ll half = power(a, b / 2, MOD) % MOD;     
    return (half * half) % MOD;
}

ll inv(ll n, ll MOD) {
    return power(n, MOD - 2, MOD);
}

int Solution::solve(int A) {
    ll MOD = 1e9 + 7;
    ll nc0 = 1 % MOD;
    ll nc1 = A % MOD;
    ll nc2 = ((nc1 * (A - 1) % MOD) % MOD * inv(2, MOD)) % MOD;
    ll nc3 = ((nc1 * (A - 1) % MOD * (A - 2) % MOD) % MOD * inv(6, MOD)) % MOD;
    ll nc4 = ((nc1 * (A - 1) % MOD * (A - 2) % MOD * (A - 3) % MOD) % MOD * inv(24, MOD)) % MOD;
    return (int)((nc0 + nc1 + nc2 + nc3 + nc4) % MOD);
}

