    #include<bits/stdc++.h>
    using namespace std;
    #define dbg(var) cout<<#var<<"="<<var<<"\n"
    #define ll long long 
    #define nl cout<<"\n"
     
    int32_t main()
    {
        ios_base::sync_with_stdio(false);cin.tie(nullptr);
        ll n;cin>>n;
        ll pos=1,cur=1;
        for(ll i=0,x;i<n;i++){
        	cin>>x;
        	cur*=(x>0?1:-1);
        	if(cur>0)pos++;
     
        }
        ll neg=n+1-pos;ll b=(pos*(pos-1))/2+(neg*(neg-1))/2;
        cout<<(n*(n+1))/2-b<<" "<<b;
       		
    }
