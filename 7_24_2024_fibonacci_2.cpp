#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int F[1000] ;

int fib(int n){
    if(n<=1){
        F[n] = n ;
        return n ;
    }
    else{
        if(F[n-1] == -1){
            F[n-1] = fib(n-1);
        }
        if(F[n-2] == -1){
            F[n-2] = fib(n-2) ;
        }
        return F[n-1]+F[n-2];
    }
}

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    fill(F,F+n,-1);
    int ans ;
    cin >> ans ;
    cout << fib(ans) << nl ;
    return 0;
}