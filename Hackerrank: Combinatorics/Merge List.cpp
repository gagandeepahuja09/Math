#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
#define ll long long int

ll power(ll x, ll y, ll p) { 
    ll res = 1;
    x = x % p;
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
  
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
ll modInverse(int n, int p) { 
    return power(n, p-2, p); 
} 

ll nCr(vector<ll>& fac, ll n, ll r, ll p) { 
    if (r==0) 
      return 1; 
    return (fac[n]* modInverse(fac[r], p) % p * modInverse(fac[n-r], p) % p) % p; 
}


// Complete the solve function below.
int solve(int n, int m) {
    vector<ll> fac(203, 0);
    ll MOD = 1e9 + 7;
    fac[0] = 1;
    for(ll i = 1; i < 203; i++) {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
    return nCr(fac, n + m, m, MOD);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        int result = solve(n, m);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
