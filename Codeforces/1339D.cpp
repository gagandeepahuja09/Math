    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long int
     
    vector<vector<ll>> adj;
    vector<ll> leaves;
     
    ll mn, mx;
     
    void dfs(int u, int par, int d) {
        if(adj[u].size() == 1) {
            if((d % 2) != 0)
                mn = 3;
            mx--;
        }
        for(auto v : adj[u]) {
            if(v == par)
                continue;
            dfs(v, u, d + 1);
        }
    }
     
    void dfs2(int u, int par) {
        ll flag = 0;
        for(auto v : adj[u]) {
            if(v == par)
                continue;
            if(adj[v].size() == 1)
                flag = 1;
            dfs2(v, u);
        }
        mx += flag;
    }
     
    int main() {
        ll n;
        cin >> n;
        adj.resize(n);
        mn = 1;
        for(ll i = 0; i < n - 1; i++) {
            ll u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        mx = n - 1;
        ll root = 0;
        for(ll i = 0; i < n; i++) {
            if(adj[i].size() == 1)
                leaves.push_back(i);
            else
                root = i;
        }
        dfs(leaves[0], -1, 0);
        dfs2(root, -1);
        cout << mn << " " << mx << endl;
    }
