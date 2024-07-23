#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int fib(int n){
    int t0 = 0 , t1 = 1 , s ;
    if(n<=1){
        return 1 ;
    }
    else {
        for(int i=2 ;i<=n ; i++){
            s = t0 + t1 ;
            t0 = t1 ;
            t1 = s ;
        }
        return s ;
    }
}

int32_t main()
{
    optimize();
    int n ;
    cin >> n ;
    cout << fib(n) << nl ;
    return 0;
}